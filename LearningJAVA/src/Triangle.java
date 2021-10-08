public class Triangle {
    double base;
    double height;
    double sidelenOne;
    double sideLenTwo;
    double sideLenThree;

    public Triangle(double base, double height, double sidelenOne, double sideLenTwo, double sideLenThree){
        this.base = base;
        this.height = height;
        this.sidelenOne = sidelenOne;
        this.sideLenTwo = sideLenTwo;
        this.sideLenThree = sideLenThree;
    }
    public double findArea(){
        return ((this.base * this.height)/2);
    }
}
