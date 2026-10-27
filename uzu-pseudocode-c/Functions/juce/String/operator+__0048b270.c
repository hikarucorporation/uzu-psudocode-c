// Function : operator+=
// Namespace: juce:String
// Entry    : 0048b270
// Prototype: String * operator+=(String * this, String * param_1)
// Body     : 0048b270 - 0048b317


/* juce::String::TEMPNAMEPLACEHOLDERVALUE(juce::String const&) */

String * __thiscall juce::String::operator+=(String *this,String *param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  char *in_RAX;
  size_t sVar3;
  int *piVar4;
  long lVar5;
  char *local_18;
  
  local_18 = *(char **)this;
  if (*local_18 == '\0') {
    lVar5 = *(long *)param_1;
    piVar4 = (int *)(lVar5 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      lVar5 = *(long *)param_1;
    }
    LOCK();
    lVar2 = *(long *)this;
    *(long *)this = lVar5;
    UNLOCK();
    piVar4 = (int *)(lVar2 + -0x10);
    local_18 = in_RAX;
    if (piVar4 == &emptyString) {
      return this;
    }
  }
  else {
    if (this != param_1) {
      __s = *(char **)param_1;
      sVar3 = strlen(__s);
      appendCharPointer(this,__s,(long)(__s + sVar3));
      return this;
    }
    piVar4 = (int *)(local_18 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
                    /* try { // try from 0048b2e0 to 0048b2ea has its CatchHandler @ 0048b318 */
    this = operator+=(this,(String *)&local_18);
    piVar4 = (int *)(local_18 + -0x10);
    if (piVar4 == &emptyString) {
      return this;
    }
  }
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar4);
  }
  return this;
}


