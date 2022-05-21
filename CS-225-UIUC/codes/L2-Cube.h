#pragma once //常用的C/C++预处理指令，只要在头文件的最开始加入这条预处理指令，就能够保证头文件只被编译一次。

/*先创建这个头文件，定义参数变量，
然后才是运行cpp同名文件实现功能*/
class Cube {
  //公共变量
public:
  double getVolume();
  double getSurfaceArea();
  void setLength(double length);

private:
  double length_;
};
