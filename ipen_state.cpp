#include "ipen_state.h"
#include "ipen_state_chart.h"

ipen_state::ipen_state()
{

}

ipen_state::~ipen_state()
{

}


void ipen_state::change_state(ipen_state *pst, ipen_state_chart *pcxt)
{  
    pcxt->__m_pstate = pst;
}