// Function : sys_audiodevnametonumber
// Namespace: 
// Entry    : 0053dc50
// Prototype: ulong sys_audiodevnametonumber(int param_1, char * param_2)
// Body     : 0053dc50 - 0053ddfc


ulong sys_audiodevnametonumber(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  ulong uVar7;
  char *__s2;
  ulong uVar8;
  uint local_8048;
  uint local_8044;
  undefined4 local_8040;
  undefined4 local_803c;
  char local_8038 [16384];
  char local_4038 [16392];
  
  local_8044 = 0;
  local_8048 = 0;
  __s2 = local_4038;
  pcVar6 = local_8038;
  sys_get_audio_devs(__s2,&local_8044,pcVar6,&local_8048,&local_803c,&local_8040,0x80,0x80,
                     audio_nextsettings);
  uVar2 = local_8044;
  uVar1 = local_8048;
  if (param_1 == 0) {
    uVar8 = (ulong)local_8044;
    if (0 < (int)local_8044) {
      uVar7 = 0;
      do {
        iVar3 = strcmp(param_2,__s2);
        if (iVar3 == 0) goto LAB_0053dde0;
        uVar7 = uVar7 + 1;
        __s2 = __s2 + 0x80;
      } while (uVar8 != uVar7);
      if (0 < (int)uVar2) {
        sVar4 = strlen(param_2);
        pcVar6 = local_4038;
        uVar7 = 0;
        do {
          sVar5 = strlen(pcVar6);
          if (sVar4 <= sVar5) {
            sVar5 = sVar4;
          }
          iVar3 = strncmp(param_2,pcVar6,sVar5);
          if (iVar3 == 0) goto LAB_0053dde0;
          uVar7 = uVar7 + 1;
          pcVar6 = pcVar6 + 0x80;
        } while (uVar8 != uVar7);
      }
    }
  }
  else {
    uVar8 = (ulong)local_8048;
    if (0 < (int)local_8048) {
      uVar7 = 0;
      do {
        iVar3 = strcmp(param_2,pcVar6);
        if (iVar3 == 0) {
          return uVar7 & 0xffffffff;
        }
        uVar7 = uVar7 + 1;
        pcVar6 = pcVar6 + 0x80;
      } while (uVar8 != uVar7);
      if (0 < (int)uVar1) {
        sVar4 = strlen(param_2);
        pcVar6 = local_8038;
        uVar7 = 0;
        do {
          sVar5 = strlen(pcVar6);
          if (sVar4 <= sVar5) {
            sVar5 = sVar4;
          }
          iVar3 = strncmp(param_2,pcVar6,sVar5);
          if (iVar3 == 0) {
LAB_0053dde0:
            return uVar7 & 0xffffffff;
          }
          uVar7 = uVar7 + 1;
          pcVar6 = pcVar6 + 0x80;
        } while (uVar8 != uVar7);
      }
    }
  }
  return 0xffffffff;
}


