// Function : insertAt
// Namespace: Steinberg:String
// Entry    : 001802c0
// Prototype: undefined insertAt(String * this, uint param_1, long * param_2, uint param_3)
// Body     : 001802c0 - 0018030b


/* Steinberg::String::insertAt(unsigned int, Steinberg::ConstString const&, int) */

void __thiscall Steinberg::String::insertAt(String *this,uint param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  void *pvVar2;
  
  if ((*(byte *)((long)param_2 + 0x13) & 0x40) == 0) {
    pcVar1 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
    insertAt(this,param_1,pcVar1,param_3);
    return;
  }
  pvVar2 = (void *)(**(code **)(*param_2 + 0x20))(param_2);
  insertAt(this,param_1,pvVar2,param_3);
  return;
}


