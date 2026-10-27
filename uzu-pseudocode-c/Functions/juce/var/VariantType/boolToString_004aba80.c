// Function : boolToString
// Namespace: juce:var:VariantType
// Entry    : 004aba80
// Prototype: VariantType * boolToString(VariantType * this, char * param_1)
// Body     : 004aba80 - 004ababf


/* juce::var::VariantType::boolToString(juce::var::ValueUnion const&) */

VariantType * __thiscall juce::var::VariantType::boolToString(VariantType *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = *param_1;
  puVar2 = operator_new__(0x1b);
  LOCK();
  *puVar2 = 0;
  UNLOCK();
  *(undefined8 *)(puVar2 + 2) = 4;
  *(undefined4 **)this = puVar2 + 4;
  *(char *)(puVar2 + 4) = '1' - (cVar1 == '\0');
  *(undefined1 *)((long)puVar2 + 0x11) = 0;
  return this;
}


