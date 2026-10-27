// Function : ~Identifier
// Namespace: juce:Identifier
// Entry    : 00486b70
// Prototype: undefined ~Identifier(Identifier * this)
// Body     : 00486b70 - 00486b95


/* juce::Identifier::~Identifier() */

void __thiscall juce::Identifier::~Identifier(Identifier *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(long *)this + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


