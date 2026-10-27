// Function : setText8
// Namespace: Steinberg:StringObject
// Entry    : 001836e0
// Prototype: undefined setText8(StringObject * this, char * param_1)
// Body     : 001836e0 - 00183762


/* non-virtual thunk to Steinberg::StringObject::setText8(char const*) */

void __thiscall Steinberg::StringObject::setText8(StringObject *this,char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (*(char **)(this + -0x18) != param_1) {
    if (param_1 == (char *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = strlen(param_1);
    }
    uVar3 = (uint)sVar1;
    uVar2 = Steinberg::String::resize((String *)(this + -0x20),uVar3,0,'\0');
    if ((char)uVar2 != '\0') {
      if (((param_1 != (char *)0x0) && (0 < (int)uVar3)) &&
         (*(void **)(this + -0x18) != (void *)0x0)) {
        memcpy(*(void **)(this + -0x18),param_1,sVar1 & 0xffffffff);
      }
      *(uint *)(this + -0x10) = *(uint *)(this + -0x10) & 0x80000000 | uVar3 & 0x3fffffff;
    }
  }
  return;
}


