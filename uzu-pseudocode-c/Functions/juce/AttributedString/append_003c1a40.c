// Function : append
// Namespace: juce:AttributedString
// Entry    : 003c1a40
// Prototype: undefined append(AttributedString * this, String * param_1, long * param_2)
// Body     : 003c1a40 - 003c1aa7


/* juce::AttributedString::append(juce::String const&, juce::Font const&) */

void __thiscall juce::AttributedString::append(AttributedString *this,String *param_1,long *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  
  juce::String::operator+=((String *)this,param_1);
  pcVar3 = *(char **)param_1;
  uVar4 = 0;
  do {
    cVar2 = *pcVar3;
    if (cVar2 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar3 + 1);
        pcVar3 = pcVar3 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar3 = pcVar3 + 1;
      if (cVar2 == '\0') {
        (anonymous_namespace)::appendRange
                  ((ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *)
                   (this + 0x18),uVar4,param_2,(uint *)0x0);
        return;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


