// Function : assign
// Namespace: Steinberg:String
// Entry    : 0017fb00
// Prototype: String * assign(String * this, uint param_2_00, uint param_2)
// Body     : 0017fb00 - 0017fb4d


/* Steinberg::String::assign(char, int) */

String * __thiscall Steinberg::String::assign(String *this,uint param_2_00,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = resize(this,param_2,0,'\0');
  if ((char)uVar1 != '\0') {
    if ((0 < (int)param_2) && (*(void **)(this + 8) != (void *)0x0)) {
      memset(*(void **)(this + 8),param_2_00 & 0xff,(ulong)param_2);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0x80000000 | param_2 & 0x3fffffff;
  }
  return this;
}


