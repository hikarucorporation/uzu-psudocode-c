// Function : sys_listdevs
// Namespace: 
// Entry    : 0053da20
// Prototype: undefined sys_listdevs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0053da20 - 0053db7b


void sys_listdevs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  int local_8038;
  int local_8034;
  undefined4 local_8030;
  undefined4 local_802c;
  char local_8028 [16384];
  char local_4028 [16392];
  
  local_8034 = 0;
  local_8038 = 0;
  local_8030 = 0;
  uVar2 = sys_get_audio_devs(local_4028,&local_8034,local_8028,&local_8038,&local_8030,&local_802c,
                             0x80,0x80,audio_nextsettings);
  if (local_8034 == 0) {
    uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "no audio input devices found");
  }
  else {
    uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "audio input devices:");
    if (0 < local_8034) {
      lVar1 = 0;
      do {
        uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%d. %s");
        lVar1 = lVar1 + 1;
      } while (lVar1 < local_8034);
    }
  }
  if (local_8038 == 0) {
    uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "no audio output devices found");
  }
  else {
    uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "audio output devices:");
    if (0 < local_8038) {
      lVar1 = 0;
      do {
        uVar2 = post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"%d. %s");
        lVar1 = lVar1 + 1;
      } while (lVar1 < local_8038);
    }
  }
  post(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"API number %d\n");
  sys_listmididevs();
  return;
}


