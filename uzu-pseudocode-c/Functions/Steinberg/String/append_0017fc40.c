// Function : append
// Namespace: Steinberg:String
// Entry    : 0017fc40
// Prototype: undefined append(String * this, long * param_1, uint param_2)
// Body     : 0017fc40 - 0017fc85


/* Steinberg::String::append(Steinberg::ConstString const&, int) */

void __thiscall Steinberg::String::append(String *this,long *param_1,uint param_2)

{
  char *pcVar1;
  
  if ((*(byte *)((long)param_1 + 0x13) & 0x40) == 0) {
    pcVar1 = (char *)(**(code **)(*param_1 + 0x18))(param_1);
    append(this,pcVar1,param_2);
    return;
  }
  pcVar1 = (char *)(**(code **)(*param_1 + 0x20))(param_1);
  append(this,pcVar1,param_2);
  return;
}


