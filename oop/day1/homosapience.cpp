#include "human.h";
#include "homosapience.h";

HomoSapience::Party()
{
  mentalHealth += 0.5;    
}
HomoSapience::Work()
{
  _healthLevel -= 0.3;
  _mentalhealth -= 0.2;
}
HomoSapience::Dance()
{
    _healthLevel += 0.2;
    _healthLevel += 0.2;
}
HomoSapience::GoToGym()
{
    _healthLevel += 0.2;
}
HomoSapience::sing() {

  _mentalHealth += 0.2;
}
