// Function : open_soundfile_via_fd
// Namespace: 
// Entry    : 00599ff0
// Prototype: int open_soundfile_via_fd(int param_1, int * param_2, long param_3)
// Body     : 00599ff0 - 0059a179


int open_soundfile_via_fd(int param_1,int *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  __off_t _Var3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 local_b8 [136];
  
  piVar2 = __errno_location();
  *piVar2 = 0;
  if (*(long *)(param_2 + 8) < 0) {
    read(param_1,local_b8,sf_minheadersize);
    if (*(long *)(param_2 + 2) == 0) {
      puVar6 = &DAT_0071ef88;
      do {
        iVar1 = (**(code **)(*(long *)(puVar6 + 8) + 0x10))(local_b8);
        if (iVar1 != 0) {
          *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar6 + 8);
          goto LAB_0059a10d;
        }
        puVar6 = puVar6 + 8;
      } while (puVar6 != &DAT_0071ef88 + sf_numtypes * 8);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_2 + 2) + 0x10))(local_b8);
      if (iVar1 != 0) {
LAB_0059a10d:
        *param_2 = param_1;
        _Var3 = lseek(param_1,0,0);
        if ((_Var3 < 0) ||
           (iVar1 = (**(code **)(*(long *)(param_2 + 2) + 0x18))(param_2), iVar1 == 0))
        goto LAB_0059a140;
        iVar1 = *param_2;
        goto LAB_0059a041;
      }
    }
    *piVar2 = -1000;
  }
  else {
    _Var3 = lseek(param_1,0,2);
    if (_Var3 < 0) goto LAB_0059a140;
    *(__off_t *)(param_2 + 0xc) = _Var3;
    *param_2 = param_1;
    iVar1 = param_1;
LAB_0059a041:
    lVar5 = param_2[0xb] * param_3 + *(long *)(param_2 + 8);
    _Var3 = lseek(iVar1,lVar5,0);
    if (lVar5 <= _Var3) {
      lVar4 = *(long *)(param_2 + 0xc) - param_2[0xb] * param_3;
      lVar5 = 0;
      if (-1 < lVar4) {
        lVar5 = lVar4;
      }
      *(long *)(param_2 + 0xc) = lVar5;
      return param_1;
    }
  }
LAB_0059a140:
  if (*piVar2 == 0) {
    *piVar2 = -0x3e9;
  }
  *param_2 = -1;
  if (-1 < param_1) {
    sys_close(param_1);
  }
  return -1;
}


