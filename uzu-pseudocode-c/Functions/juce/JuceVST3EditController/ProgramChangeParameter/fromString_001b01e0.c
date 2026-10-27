// Function : fromString
// Namespace: juce:JuceVST3EditController:ProgramChangeParameter
// Entry    : 001b01e0
// Prototype: ulong fromString(ProgramChangeParameter * this, ushort * param_1, double * param_2)
// Body     : 001b01e0 - 001b02a8


/* juce::JuceVST3EditController::ProgramChangeParameter::fromString(char16_t const*, double&) const
    */

ulong __thiscall
juce::JuceVST3EditController::ProgramChangeParameter::fromString
          (ProgramChangeParameter *this,ushort *param_1,double *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined7 uVar5;
  String aSStack_48 [8];
  double *local_40;
  String local_38 [8];
  
  juce::String::String(aSStack_48,param_1);
                    /* try { // try from 001b0206 to 001b020b has its CatchHandler @ 001b02a9 */
  iVar2 = (**(code **)(**(long **)(this + 0x338) + 0xe0))();
  iVar3 = 0;
  if (iVar2 < 1) {
    bVar4 = false;
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined7)((ulong)param_2 >> 8);
    bVar4 = true;
    local_40 = param_2;
    do {
                    /* try { // try from 001b023a to 001b0244 has its CatchHandler @ 001b02ab */
      (**(code **)(**(long **)(this + 0x338) + 0xf8))(local_38,*(long **)(this + 0x338),iVar3);
      bVar1 = operator==((undefined8 *)aSStack_48,(undefined8 *)local_38);
      juce::String::~String(local_38);
      if (bVar1) {
        *local_40 = (double)iVar3 / (double)*(int *)(this + 0x314);
        break;
      }
      iVar3 = iVar3 + 1;
      bVar4 = iVar3 < iVar2;
    } while (iVar3 != iVar2);
  }
  juce::String::~String(aSStack_48);
  return CONCAT71(uVar5,bVar4) & 0xffffff01;
}


