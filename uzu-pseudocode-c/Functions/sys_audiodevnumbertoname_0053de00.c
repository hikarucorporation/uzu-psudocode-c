// Function : sys_audiodevnumbertoname
// Namespace: 
// Entry    : 0053de00
// Prototype: undefined sys_audiodevnumbertoname(int param_1, int param_2, char * param_3, int param_4)
// Body     : 0053de00 - 0053dece


void sys_audiodevnumbertoname(int param_1,int param_2,char *param_3,int param_4)

{
  char *__src;
  int local_8038;
  int local_8034;
  undefined4 local_8030;
  undefined4 local_802c;
  char local_8028 [16384];
  char local_4028 [16392];
  
  local_8034 = 0;
  local_8038 = 0;
  if (param_2 < 0) goto LAB_0053debe;
  sys_get_audio_devs(local_4028,&local_8034,local_8028,&local_8038,&local_802c,&local_8030,0x80,0x80
                     ,audio_nextsettings);
  if ((param_1 == 0) || (local_8038 <= param_2)) {
    if ((param_1 == 0) && (param_2 < local_8034)) {
      __src = local_4028 + (param_2 << 7);
      goto LAB_0053dea7;
    }
    *param_3 = '\0';
  }
  else {
    __src = local_8028 + (param_2 << 7);
LAB_0053dea7:
    strncpy(param_3,__src,(long)param_4);
  }
  param_3 = param_3 + ((long)param_4 - 1);
LAB_0053debe:
  *param_3 = '\0';
  return;
}


