#include <iostream>
#include <string>
class Ball{
private:
    std::string m_color="black";
    double m_radius=10.0;
public:
    explicit Ball()=default;

    explicit Ball(std::string c, double r):m_color{c},m_radius{r}{
    }
    explicit Ball(std::string c):m_color{c}{

    }
    explicit Ball(double r):m_radius{r}{

    }
    void print(){
        std::cout<<"color: "<<m_color<<", radius: "<<m_radius<<"\n";
    }
};
int main() {
    Ball def;
    def.print();

    Ball blue("blue");
    blue.print();

    Ball twenty(20.0);
    twenty.print();

    Ball blueTwenty("blue", 20.0);
    blueTwenty.print();
    return 0;
}