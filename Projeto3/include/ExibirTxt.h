#ifndef EXIBIRTXT_H
#define EXIBIRTXT_H
#include <string>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
using namespace std;
using namespace cv;
class ExibirTxt
{
    public:
        ExibirTxt();
        virtual ~ExibirTxt();
        void exibirT(string,Mat &m,int);
};

#endif // EXIBIRTXT_H
