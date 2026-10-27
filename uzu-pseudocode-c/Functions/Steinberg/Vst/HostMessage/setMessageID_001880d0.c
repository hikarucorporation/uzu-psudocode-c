// Function : setMessageID
// Namespace: Steinberg:Vst:HostMessage
// Entry    : 001880d0
// Prototype: undefined setMessageID(HostMessage * this, char * param_1)
// Body     : 001880d0 - 00188123


/* Steinberg::Vst::HostMessage::setMessageID(char const*) */

void __thiscall Steinberg::Vst::HostMessage::setMessageID(HostMessage *this,char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 == (char *)0x0) {
    return;
  }
  sVar1 = strlen(param_1);
  __dest = operator_new__(sVar1 + 1);
  *(char **)(this + 0x10) = __dest;
  strcpy(__dest,param_1);
  return;
}


