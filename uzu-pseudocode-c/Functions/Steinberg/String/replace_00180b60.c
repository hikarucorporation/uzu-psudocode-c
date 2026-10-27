// Function : replace
// Namespace: Steinberg:String
// Entry    : 00180b60
// Prototype: int replace(String * this, char * param_1, char * param_2, char param_3, int param_4)
// Body     : 00180b60 - 00180cb9


/* Steinberg::String::replace(char const*, char const*, bool, Steinberg::ConstString::CompareMode)
    */

int __thiscall
Steinberg::String::replace(String *this,char *param_1,char *param_2,char param_3,int param_4)

{
  size_t sVar1;
  ulong uVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  undefined **local_50;
  char *local_48;
  uint local_40;
  size_t local_38;
  
  iVar4 = 0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    local_50 = &PTR__ConstString_00704d88;
    local_48 = param_1;
    sVar1 = strlen(param_1);
    local_40 = (uint)sVar1 & 0x3fffffff;
    iVar4 = 0;
    uVar2 = ConstString::findNext
                      ((ConstString *)this,0,(long *)&local_50,0xffffffff,param_4,0xffffffff);
    if (-1 < (int)(uint)uVar2) {
      sVar1 = strlen(param_1);
      sVar3 = strlen(param_2);
      uVar5 = (uint)sVar3;
      if (param_3 == '\0') {
        replace(this,(uint)uVar2,(uint)sVar1,param_2,uVar5);
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
        local_38 = sVar1;
        do {
          replace(this,(uint)uVar2,(uint)local_38,param_2,uVar5);
          iVar4 = iVar4 + 1;
          local_50 = &PTR__ConstString_00704d88;
          local_48 = param_1;
          sVar1 = strlen(param_1);
          local_40 = local_40 & 0x80000000 | (uint)sVar1 & 0x3fffffff;
          uVar2 = ConstString::findNext
                            ((ConstString *)this,(uint)uVar2 + uVar5,(long *)&local_50,0xffffffff,
                             param_4,0xffffffff);
        } while (-1 < (int)uVar2);
      }
    }
  }
  return iVar4;
}


