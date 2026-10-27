// Function : replace
// Namespace: Steinberg:String
// Entry    : 00180cc0
// Prototype: int replace(String * this, long param_1, void * param_2, char param_3, int param_4)
// Body     : 00180cc0 - 00180e96


/* Steinberg::String::replace(char16_t const*, char16_t const*, bool,
   Steinberg::ConstString::CompareMode) */

int __thiscall
Steinberg::String::replace(String *this,long param_1,void *param_2,char param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined **local_48;
  long local_40;
  uint local_38;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (param_2 != (void *)0x0) {
      local_48 = &PTR__ConstString_00704d88;
      uVar3 = 0;
      do {
        psVar1 = (short *)(param_1 + uVar3);
        uVar3 = uVar3 + 2;
      } while (*psVar1 != 0);
      local_38 = ((uint)(uVar3 >> 1) & 0x7fffffff) - 1 & 0x3fffffff | 0x40000000;
      iVar2 = 0;
      local_40 = param_1;
      uVar3 = ConstString::findNext
                        ((ConstString *)this,0,(long *)&local_48,0xffffffff,param_4,0xffffffff);
      if (-1 < (int)(uint)uVar3) {
        uVar4 = 0;
        do {
          psVar1 = (short *)(param_1 + uVar4);
          uVar4 = uVar4 + 2;
        } while (*psVar1 != 0);
        uVar7 = 0;
        do {
          psVar1 = (short *)((long)param_2 + uVar7);
          uVar7 = uVar7 + 2;
        } while (*psVar1 != 0);
        iVar5 = (int)(uVar4 >> 1) + -1;
        uVar6 = (int)(uVar7 >> 1) - 1;
        if (param_3 == '\0') {
          replace(this,(uint)uVar3,iVar5,param_2,uVar6);
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
          do {
            replace(this,(uint)uVar3,iVar5,param_2,uVar6);
            iVar2 = iVar2 + 1;
            local_48 = &PTR__ConstString_00704d88;
            uVar4 = 0;
            do {
              psVar1 = (short *)(param_1 + uVar4);
              uVar4 = uVar4 + 2;
            } while (*psVar1 != 0);
            local_38 = (((uint)(uVar4 >> 1) & 0x7fffffff) - 1 & 0x3fffffff) +
                       (local_38 & 0x80000000) + 0x40000000;
            local_40 = param_1;
            uVar3 = ConstString::findNext
                              ((ConstString *)this,(uint)uVar3 + uVar6,(long *)&local_48,0xffffffff,
                               param_4,0xffffffff);
          } while (-1 < (int)uVar3);
        }
      }
    }
  }
  return iVar2;
}


