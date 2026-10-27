// Function : setPosition
// Namespace: juce:FileInputStream
// Entry    : 0049eee0
// Prototype: bool setPosition(FileInputStream * this, long param_1)
// Body     : 0049eee0 - 0049ef24


/* juce::FileInputStream::setPosition(long long) */

bool __thiscall juce::FileInputStream::setPosition(FileInputStream *this,long param_1)

{
  __off_t _Var1;
  long lVar2;
  
  lVar2 = param_1;
  if (*(long *)(this + 0x18) == param_1) goto LAB_0049ef17;
  if (*(int *)(this + 0x10) < 0) {
LAB_0049ef0c:
    lVar2 = -1;
  }
  else {
    _Var1 = lseek(*(int *)(this + 0x10),param_1,0);
    if (_Var1 != param_1) goto LAB_0049ef0c;
  }
  *(long *)(this + 0x18) = lVar2;
LAB_0049ef17:
  return lVar2 == param_1;
}


