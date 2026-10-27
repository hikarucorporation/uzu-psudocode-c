// Function : skipNextBytes
// Namespace: juce:InputStream
// Entry    : 0049ef30
// Prototype: undefined skipNextBytes(InputStream * this, ulong param_1)
// Body     : 0049ef30 - 0049efa8


/* juce::InputStream::skipNextBytes(long long) */

void __thiscall juce::InputStream::skipNextBytes(InputStream *this,ulong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  size_t __size;
  
  if ((long)param_1 < 1) {
    return;
  }
  __size = 0x4000;
  if (param_1 < 0x4000) {
    __size = param_1;
  }
  __ptr = malloc(__size);
  do {
                    /* try { // try from 0049ef63 to 0049ef82 has its CatchHandler @ 0049efa9 */
    cVar2 = (**(code **)(*(long *)this + 0x18))(this);
    if (cVar2 != '\0') break;
    uVar4 = __size;
    if ((long)param_1 <= (long)__size) {
      uVar4 = param_1;
    }
    iVar3 = (**(code **)(*(long *)this + 0x20))(this,__ptr,uVar4 & 0xffffffff);
    uVar4 = param_1 - (long)iVar3;
    bVar1 = (long)iVar3 <= (long)param_1;
    param_1 = uVar4;
  } while (uVar4 != 0 && bVar1);
  free(__ptr);
  return;
}


