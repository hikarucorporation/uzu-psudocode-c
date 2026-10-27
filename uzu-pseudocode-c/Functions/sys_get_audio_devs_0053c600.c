// Function : sys_get_audio_devs
// Namespace: 
// Entry    : 0053c600
// Prototype: undefined sys_get_audio_devs(char * param_1, undefined4 * param_2, char * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6, undefined8 param_7, int param_8, int param_9)
// Body     : 0053c600 - 0053c6e5


void sys_get_audio_devs(char *param_1,undefined4 *param_2,char *param_3,undefined4 *param_4,
                       undefined4 *param_5,undefined4 *param_6,undefined8 param_7,int param_8,
                       int param_9)

{
  long lVar1;
  
  *param_6 = 0;
  if (param_9 == 9) {
    dummy_getdevs((undefined4 *)param_1,param_2,(undefined4 *)param_3,param_4,param_5);
  }
  else {
    *param_4 = 3;
    *param_2 = 3;
    lVar1 = (long)param_8;
    sprintf(param_1,"input device #%d",1);
    sprintf(param_3,"output device #%d",1);
    sprintf(param_1 + lVar1,"input device #%d",2);
    sprintf(param_3 + lVar1,"output device #%d",2);
    sprintf(param_1 + lVar1 * 2,"input device #%d",3);
    sprintf(param_3 + lVar1 * 2,"output device #%d",3);
    *param_5 = 0;
  }
  return;
}


