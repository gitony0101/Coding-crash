# [cmath](https://zh.cppreference.com/w/cpp/header/cmath)


- 此头文件原作为 <math.h> 存在于 C 标准库。

- 此头文件是数值库的一部分。

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "abs(-19) = " << abs(-19) << endl;
    cout << "max(5, 4) = " << max(5, 4) << endl;
    cout << "min(5, 4) = " << min(5, 4) << endl;
    cout << "floor(10.45) = " << floor(10.5) << endl;
    cout << "round(10.45) = " << round(10.5) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "sqrt(100) = " << sqrt(100) << endl;

    cout << endl;

    cout << "exp(1)" << exp(1) << endl;
    cout << "exp2(1)" << exp2(1) << endl;
    cout << "exp2(2)" << exp2(2) << endl;

    cout << "log(20)" << log(20) << endl;
    cout << "log2(8)" << log2(8) << endl;

    // 随机函数
    srand(time(NULL));
    for (size_t i = 0; i < 10; i++)
    {
        int secret = rand() % 10;
        cout << "secret : " << secret << endl;
    }

    cout << "----- yz ------" << endl;
    return 0;
}

```

## 概要

```cpp
namespace std {
  using float_t = /* 见描述 */;
  using double_t = /* 见描述 */;
}
 
#define HUGE_VAL /* 见描述 */
#define HUGE_VALF /* 见描述 */
#define HUGE_VALL /* 见描述 */
#define INFINITY /* 见描述 */
#define NAN /* 见描述 */
#define FP_INFINITE /* 见描述 */
#define FP_NAN /* 见描述 */
#define FP_NORMAL /* 见描述 */
#define FP_SUBNORMAL /* 见描述 */
#define FP_ZERO /* 见描述 */
#define FP_FAST_FMA /* 见描述 */
#define FP_FAST_FMAF /* 见描述 */
#define FP_FAST_FMAL /* 见描述 */
#define FP_ILOGB0 /* 见描述 */
#define FP_ILOGBNAN /* 见描述 */
#define MATH_ERRNO /* 见描述 */
#define MATH_ERREXCEPT /* 见描述 */
 
#define math_errhandling /* 见描述 */
 
namespace std {
  float acos(float x);
  double acos(double x);
  long double acos(long double x);
  float acosf(float x);
  long double acosl(long double x);
 
  float asin(float x);
  double asin(double x);
  long double asin(long double x);
  float asinf(float x);
  long double asinl(long double x);
 
  float atan(float x);
  double atan(double x);
  long double atan(long double x);
  float atanf(float x);
  long double atanl(long double x);
 
  float atan2(float y, float x);
  double atan2(double y, double x);
  long double atan2(long double y, long double x);
  float atan2f(float y, float x);
  long double atan2l(long double y, long double x);
 
  float cos(float x);
  double cos(double x);
  long double cos(long double x);
  float cosf(float x);
  long double cosl(long double x);
 
  float sin(float x);
  double sin(double x);
  long double sin(long double x);
  float sinf(float x);
  long double sinl(long double x);
 
  float tan(float x);
  double tan(double x);
  long double tan(long double x);
  float tanf(float x);
  long double tanl(long double x);
 
  float acosh(float x);
  double acosh(double x);
  long double acosh(long double x);
  float acoshf(float x);
  long double acoshl(long double x);
 
  float asinh(float x);
  double asinh(double x);
  long double asinh(long double x);
  float asinhf(float x);
  long double asinhl(long double x);
 
  float atanh(float x);
  double atanh(double x);
  long double atanh(long double x);
  float atanhf(float x);
  long double atanhl(long double x);
 
  float cosh(float x);
  double cosh(double x);
  long double cosh(long double x);
  float coshf(float x);
  long double coshl(long double x);
 
  float sinh(float x);
  double sinh(double x);
  long double sinh(long double x);
  float sinhf(float x);
  long double sinhl(long double x);
 
  float tanh(float x);
  double tanh(double x);
  long double tanh(long double x);
  float tanhf(float x);
  long double tanhl(long double x);
 
  float exp(float x);
  double exp(double x);
  long double exp(long double x);
  float expf(float x);
  long double expl(long double x);
 
  float exp2(float x);
  double exp2(double x);
  long double exp2(long double x);
  float exp2f(float x);
  long double exp2l(long double x);
 
  float expm1(float x);
  double expm1(double x);
  long double expm1(long double x);
  float expm1f(float x);
  long double expm1l(long double x);
 
  float frexp(float value, int* exp);
  double frexp(double value, int* exp);
  long double frexp(long double value, int* exp);
  float frexpf(float value, int* exp);
  long double frexpl(long double value, int* exp);
 
  int ilogb(float x);
  int ilogb(double x);
  int ilogb(long double x);
  int ilogbf(float x);
  int ilogbl(long double x);
 
  float ldexp(float x, int exp);
  double ldexp(double x, int exp);
  long double ldexp(long double x, int exp);
  float ldexpf(float x, int exp);
  long double ldexpl(long double x, int exp);
 
  float log(float x);
  double log(double x);
  long double log(long double x);
  float logf(float x);
  long double logl(long double x);
 
  float log10(float x);
  double log10(double x);
  long double log10(long double x);
  float log10f(float x);
  long double log10l(long double x);
 
  float log1p(float x);
  double log1p(double x);
  long double log1p(long double x);
  float log1pf(float x);
  long double log1pl(long double x);
 
  float log2(float x);
  double log2(double x);
  long double log2(long double x);
  float log2f(float x);
  long double log2l(long double x);
 
  float logb(float x);
  double logb(double x);
  long double logb(long double x);
  float logbf(float x);
  long double logbl(long double x);
 
  float modf(float value, float* iptr);
  double modf(double value, double* iptr);
  long double modf(long double value, long double* iptr);
  float modff(float value, float* iptr);
  long double modfl(long double value, long double* iptr);
 
  float scalbn(float x, int n);
  double scalbn(double x, int n);
  long double scalbn(long double x, int n);
  float scalbnf(float x, int n);
  long double scalbnl(long double x, int n);
 
  float scalbln(float x, long int n);
  double scalbln(double x, long int n);
  long double scalbln(long double x, long int n);
  float scalblnf(float x, long int n);
  long double scalblnl(long double x, long int n);
 
  float cbrt(float x);
  double cbrt(double x);
  long double cbrt(long double x);
  float cbrtf(float x);
  long double cbrtl(long double x);
 
  // 绝对值
  int abs(int j);
  long int abs(long int j);
  long long int abs(long long int j);
  float abs(float j);
  double abs(double j);
  long double abs(long double j);
 
  float fabs(float x);
  double fabs(double x);
  long double fabs(long double x);
  float fabsf(float x);
  long double fabsl(long double x);
 
  float hypot(float x, float y);
  double hypot(double x, double y);
  long double hypot(long double x, long double y);
  float hypotf(float x, float y);
  long double hypotl(long double x, long double y);
 
  // 三维斜边
  float hypot(float x, float y, float z);
  double hypot(double x, double y, double z);
  long double hypot(long double x, long double y, long double z);
 
  float pow(float x, float y);
  double pow(double x, double y);
  long double pow(long double x, long double y);
  float powf(float x, float y);
  long double powl(long double x, long double y);
 
  float sqrt(float x);
  double sqrt(double x);
  long double sqrt(long double x);
  float sqrtf(float x);
  long double sqrtl(long double x);
 
  float erf(float x);
  double erf(double x);
  long double erf(long double x);
  float erff(float x);
  long double erfl(long double x);
 
  float erfc(float x);
  double erfc(double x);
  long double erfc(long double x);
  float erfcf(float x);
  long double erfcl(long double x);
 
  float lgamma(float x);
  double lgamma(double x);
  long double lgamma(long double x);
  float lgammaf(float x);
  long double lgammal(long double x);
 
  float tgamma(float x);
  double tgamma(double x);
  long double tgamma(long double x);
  float tgammaf(float x);
  long double tgammal(long double x);
 
  float ceil(float x);
  double ceil(double x);
  long double ceil(long double x);
  float ceilf(float x);
  long double ceill(long double x);
 
  float floor(float x);
  double floor(double x);
  long double floor(long double x);
  float floorf(float x);
  long double floorl(long double x);
 
  float nearbyint(float x);
  double nearbyint(double x);
  long double nearbyint(long double x);
  float nearbyintf(float x);
  long double nearbyintl(long double x);
 
  float rint(float x);
  double rint(double x);
  long double rint(long double x);
  float rintf(float x);
  long double rintl(long double x);
 
  long int lrint(float x);
  long int lrint(double x);
  long int lrint(long double x);
  long int lrintf(float x);
  long int lrintl(long double x);
 
  long long int llrint(float x);
  long long int llrint(double x);
  long long int llrint(long double x);
  long long int llrintf(float x);
  long long int llrintl(long double x);
 
  float round(float x);
  double round(double x);
  long double round(long double x);
  float roundf(float x);
  long double roundl(long double x);
 
  long int lround(float x);
  long int lround(double x);
  long int lround(long double x);
  long int lroundf(float x);
  long int lroundl(long double x);
 
  long long int llround(float x);
  long long int llround(double x);
  long long int llround(long double x);
  long long int llroundf(float x);
  long long int llroundl(long double x);
 
  float trunc(float x);
  double trunc(double x);
  long double trunc(long double x);
  float truncf(float x);
  long double truncl(long double x);
 
  float fmod(float x, float y);
  double fmod(double x, double y);
  long double fmod(long double x, long double y);
  float fmodf(float x, float y);
  long double fmodl(long double x, long double y);
 
  float remainder(float x, float y);
  double remainder(double x, double y);
  long double remainder(long double x, long double y);
  float remainderf(float x, float y);
  long double remainderl(long double x, long double y);
 
  float remquo(float x, float y, int* quo);
  double remquo(double x, double y, int* quo);
  long double remquo(long double x, long double y, int* quo);
  float remquof(float x, float y, int* quo);
  long double remquol(long double x, long double y, int* quo);
 
  float copysign(float x, float y);
  double copysign(double x, double y);
  long double copysign(long double x, long double y);
  float copysignf(float x, float y);
  long double copysignl(long double x, long double y);
 
  double nan(const char* tagp);
  float nanf(const char* tagp);
  long double nanl(const char* tagp);
 
  float nextafter(float x, float y);
  double nextafter(double x, double y);
  long double nextafter(long double x, long double y);
  float nextafterf(float x, float y);
  long double nextafterl(long double x, long double y);
 
  float nexttoward(float x, long double y);
  double nexttoward(double x, long double y);
  long double nexttoward(long double x, long double y);
  float nexttowardf(float x, long double y);
  long double nexttowardl(long double x, long double y);
 
  float fdim(float x, float y);
  double fdim(double x, double y);
  long double fdim(long double x, long double y);
  float fdimf(float x, float y);
  long double fdiml(long double x, long double y);
 
  float fmax(float x, float y);
  double fmax(double x, double y);
  long double fmax(long double x, long double y);
  float fmaxf(float x, float y);
  long double fmaxl(long double x, long double y);
 
  float fmin(float x, float y);
  double fmin(double x, double y);
  long double fmin(long double x, long double y);
  float fminf(float x, float y);
  long double fminl(long double x, long double y);
 
  float fma(float x, float y, float z);
  double fma(double x, double y, double z);
  long double fma(long double x, long double y, long double z);
  float fmaf(float x, float y, float z);
  long double fmal(long double x, long double y, long double z);
 
  // 线性插值
  constexpr float lerp(float a, float b, float t) noexcept;
  constexpr double lerp(double a, double b, double t) noexcept;
  constexpr long double lerp(long double a, long double b, long double t) noexcept;
 
  // 分类/比较函数
  int fpclassify(float x);
  int fpclassify(double x);
  int fpclassify(long double x);
 
  bool isfinite(float x);
  bool isfinite(double x);
  bool isfinite(long double x);
 
  bool isinf(float x);
  bool isinf(double x);
  bool isinf(long double x);
 
  bool isnan(float x);
  bool isnan(double x);
  bool isnan(long double x);
 
  bool isnormal(float x);
  bool isnormal(double x);
  bool isnormal(long double x);
 
  bool signbit(float x);
  bool signbit(double x);
  bool signbit(long double x);
 
  bool isgreater(float x, float y);
  bool isgreater(double x, double y);
  bool isgreater(long double x, long double y);
 
  bool isgreaterequal(float x, float y);
  bool isgreaterequal(double x, double y);
  bool isgreaterequal(long double x, long double y);
 
  bool isless(float x, float y);
  bool isless(double x, double y);
  bool isless(long double x, long double y);
 
  bool islessequal(float x, float y);
  bool islessequal(double x, double y);
  bool islessequal(long double x, long double y);
 
  bool islessgreater(float x, float y);
  bool islessgreater(double x, double y);
  bool islessgreater(long double x, long double y);
 
  bool isunordered(float x, float y);
  bool isunordered(double x, double y);
  bool isunordered(long double x, long double y);
 
  // 数学特殊函数
 
  // 连带拉盖尔多项式
  double       assoc_laguerre(unsigned n, unsigned m, double x);
  float        assoc_laguerref(unsigned n, unsigned m, float x);
  long double  assoc_laguerrel(unsigned n, unsigned m, long double x);
 
  // 连带勒让德多项式
  double       assoc_legendre(unsigned l, unsigned m, double x);
  float        assoc_legendref(unsigned l, unsigned m, float x);
  long double  assoc_legendrel(unsigned l, unsigned m, long double x);
 
  // beta 函数
  double       beta(double x, double y);
  float        betaf(float x, float y);
  long double  betal(long double x, long double y);
 
  // 第一类完全椭圆积分
  double       comp_ellint_1(double k);
  float        comp_ellint_1f(float k);
  long double  comp_ellint_1l(long double k);
 
  // 第二类完全椭圆积分
  double       comp_ellint_2(double k);
  float        comp_ellint_2f(float k);
  long double  comp_ellint_2l(long double k);
 
  // 第三类完全椭圆积分
  double       comp_ellint_3(double k, double nu);
  float        comp_ellint_3f(float k, float nu);
  long double  comp_ellint_3l(long double k, long double nu);
 
  // 规则变形圆柱贝塞尔函数
  double       cyl_bessel_i(double nu, double x);
  float        cyl_bessel_if(float nu, float x);
  long double  cyl_bessel_il(long double nu, long double x);
 
  // 第一类圆柱贝塞尔函数
  double       cyl_bessel_j(double nu, double x);
  float        cyl_bessel_jf(float nu, float x);
  long double  cyl_bessel_jl(long double nu, long double x);
 
  // 不规则变形圆柱贝塞尔函数
  double       cyl_bessel_k(double nu, double x);
  float        cyl_bessel_kf(float nu, float x);
  long double  cyl_bessel_kl(long double nu, long double x);
 
  // 圆柱诺伊曼函数；
  // 第二类圆柱贝塞尔函数
  double       cyl_neumann(double nu, double x);
  float        cyl_neumannf(float nu, float x);
  long double  cyl_neumannl(long double nu, long double x);
 
  // 第一类不完全椭圆积分
  double       ellint_1(double k, double phi);
  float        ellint_1f(float k, float phi);
  long double  ellint_1l(long double k, long double phi);
 
  // 第二类不完全椭圆积分
  double       ellint_2(double k, double phi);
  float        ellint_2f(float k, float phi);
  long double  ellint_2l(long double k, long double phi);
 
  // 第三类不完全椭圆积分
  double       ellint_3(double k, double nu, double phi);
  float        ellint_3f(float k, float nu, float phi);
  long double  ellint_3l(long double k, long double nu, long double phi);
 
  // 指数积分
  double       expint(double x);
  float        expintf(float x);
  long double  expintl(long double x);
 
  // 埃尔米特多项式
  double       hermite(unsigned n, double x);
  float        hermitef(unsigned n, float x);
  long double  hermitel(unsigned n, long double x);
 
  // 拉盖尔多项式
  double       laguerre(unsigned n, double x);
  float        laguerref(unsigned n, float x);
  long double  laguerrel(unsigned n, long double x);
 
  // 勒让德多项式
  double       legendre(unsigned l, double x);
  float        legendref(unsigned l, float x);
  long double  legendrel(unsigned l, long double x);
 
  // 黎曼 zeta 函数
  double       riemann_zeta(double x);
  float        riemann_zetaf(float x);
  long double  riemann_zetal(long double x);
 
  // 第一类球面贝塞尔函数
  double       sph_bessel(unsigned n, double x);
  float        sph_besself(unsigned n, float x);
  long double  sph_bessell(unsigned n, long double x);
 
  // 球面连带勒让德函数
  double       sph_legendre(unsigned l, unsigned m, double theta);
  float        sph_legendref(unsigned l, unsigned m, float theta);
  long double  sph_legendrel(unsigned l, unsigned m, long double theta);
 
  // 球面诺依曼函数；
  // 第二类球面贝塞尔函数
  double       sph_neumann(unsigned n, double x);
  float        sph_neumannf(unsigned n, float x);
  long double  sph_neumannl(unsigned n, long double x);
}

```

```c++

```
