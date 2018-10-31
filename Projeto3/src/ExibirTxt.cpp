#include "../include/ExibirTxt.h"
using namespace cv;



void ExibirTxt::exibirT(std::string texto,Mat &m, int posicao)
{
    putText(m,texto,
    Point2f(0, posicao),
    FONT_HERSHEY_COMPLEX, 0.5,
    Scalar(0, 0, 0,0),
    1, LINE_AA);

}

ExibirTxt::ExibirTxt(){}

ExibirTxt::~ExibirTxt(){}
