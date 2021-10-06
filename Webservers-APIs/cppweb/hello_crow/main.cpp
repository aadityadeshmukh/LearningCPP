#include "crow_all.h"
using namespace std;
using namespace crow;

void sendFile(response &res, string filename, string contentType){
    ifstream in("../public/" + filename, ifstream::in);
    if(in){
        ostringstream contents;
        contents << in.rdbuf();
        in.close();
        res.set_header("Content-Type", contentType);
        res.write(contents.str());
    }
    else{
        res.code = 404;
        res.write("Not Found");
    }
    res.end();
}

void sendHtml(response &res, string filename){
    sendFile(res, filename + ".html", "text/html");
}
void sendImages(response &res, string filename){
    sendFile(res, "images/" + filename , "image/jpeg");
}
void sendScripts(response &res, string filename){
    sendFile(res, "scripts/" + filename , "text/javascript");
}
void sendStyles(response &res, string filename){
    sendFile(res, "styles/" + filename , "text/css");
}
int main(int argc, char* argv[]){
    crow::SimpleApp app;

    CROW_ROUTE(app, "/styles/<string>")
        ([](const request &req, response &res, string filename){
            
           sendStyles(res, filename);
        });

            CROW_ROUTE(app, "/scripts/<string>")
        ([](const request &req, response &res, string filename){
            
           sendScripts(res, filename);
        });

            CROW_ROUTE(app, "/images/<string>")
        ([](const request &req, response &res, string filename){
            
           sendImages(res, filename);
        });

    CROW_ROUTE(app, "/")
        ([](const request &req, response &res){
            
           sendHtml(res, "index");
        }); //route takes the app variable and the trigger

        // CROW_ROUTE(app, "/")
        // ([](const request &req, response &res){
            
        //    sendHtml(res, "about");
        // });

    char* port = getenv("PORT");
    uint16_t iPort = static_cast<uint16_t>(port != NULL ? stoi(port) : 18080);
    cout << "PORT= " << iPort << endl;
    app.port(iPort).multithreaded().run();
}