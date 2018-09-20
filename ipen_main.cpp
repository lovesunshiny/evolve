#include <memory>
#include "ipen_state_chart.h"

int main(int argc, char** argv) 
{
    std::shared_ptr<ipen_state_chart> spc = std::make_shared<ipen_state_chart>();
    spc->enter_ready_state();
    spc->enter_reading_state();
    spc->enter_ready_state();
    //spc->enter_reading_state();
    spc->enter_pending_state();


    return 0;
}