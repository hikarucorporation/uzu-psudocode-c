// Function : replace
// Namespace: Steinberg:String
// Entry    : 00180600
// Prototype: undefined replace(String * this, uint param_1, uint param_2, long * param_3, uint param_4)
// Body     : 00180600 - 00180663


/* Steinberg::String::replace(unsigned int, int, Steinberg::ConstString const&, int) */

void __thiscall
Steinberg::String::replace(String *this,uint param_1,uint param_2,long *param_3,uint param_4)

{
  char *pcVar1;
  void *pvVar2;
  
  if ((*(byte *)((long)param_3 + 0x13) & 0x40) == 0) {
    pcVar1 = (char *)(**(code **)(*param_3 + 0x18))(param_3);
    replace(this,param_1,param_2,pcVar1,param_4);
    return;
  }
  pvVar2 = (void *)(**(code **)(*param_3 + 0x20))(param_3);
  replace(this,param_1,param_2,pvVar2,param_4);
  return;
}


