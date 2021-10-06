[[C++]]
- Installations
	- Docker
	- IDE

- Dockerfile
	- blueprint which we will use to create our docker image
	
- build
	- `docker build -t cppbox .`
	- builds the docker image based on the dockerfile
	- `-t` tags the build with the word cppbox

- run
	- `docker run -ti <tagname>:latest bash`

- adding a volume
	- volume is shared by host machine and one or more docker containers
	- `-v` options
	- `docker -v <host>:<container> -ti <image> bash`
	- `<host>` - absolute path of the host dir
	- `<container>` - absolute path of the container dir
	- `<image>` name of the image to run
	- By creating a volume on our host machine we can edit files on the container
	- Opening a port
		- `-p <host port>:<container port> -e PORT=8081 <image> <app to run>`
- building crow
	- cpp web microframework
- serving the example
	- login to heroku: `heroku login`
	- `heroku container:login`
	- `heroku create`
	- `docker build -t hello_crow .`
	- `heroku container:push web -a <use name created in heroku create>`
	- `heroku container:release web -a <use name created in heroku create>`
	- `heroku open -a <name created in heroku create>`
- pushing to docker hub
	- `docker login --username=aadityadeshmukh`
	- `docker images`
	- choose the image id from the list
	- `docker tag <image_id> aadityadeshmukh/<image_name>:latest`
	- `docker push aadityadeshmukh.<image_name>`


[[Building Websites]]