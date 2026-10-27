// Function : String
// Namespace: juce:String
// Entry    : 004a7100
// Prototype: undefined String(String * this, char * param_1, long param_2)
// Body     : 004a7100 - 004a7169


/* juce::String::String(juce::CharPointer_UTF8, juce::CharPointer_UTF8) */

void __thiscall juce::String::String(String *this,char *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *__dest;
  ulong uVar2;
  size_t __n;
  
  __dest = (undefined4 *)&DAT_0061ac58;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    __n = param_2 - (long)param_1;
    uVar2 = __n + 4 & 0xfffffffffffffffc;
    puVar1 = operator_new__(uVar2 + 0x17);
    LOCK();
    *puVar1 = 0;
    UNLOCK();
    *(ulong *)(puVar1 + 2) = uVar2;
    __dest = puVar1 + 4;
    memcpy(__dest,param_1,__n);
    *(undefined1 *)((long)puVar1 + __n + 0x10) = 0;
  }
  *(undefined4 **)this = __dest;
  return;
}


