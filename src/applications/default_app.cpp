#include "applications/default_app.h"
#include "components/ota.h"
#include "components/communication.h"
#include "components/filesystem.h"
#include "components/tft.h"

void app_begin(){
    
    communication_begin();
    filesystem_begin();
    ota_begin();
    tft_begin();
}

void app_run(){
    communication_run();
    filesystem_run();
    ota_run();
    tft_run();
}