// Function : updateParameterInfo
// Namespace: juce:JuceVST3EditController:Param
// Entry    : 001afa70
// Prototype: bool updateParameterInfo(Param * this)
// Body     : 001afa70 - 001afcbe


/* juce::JuceVST3EditController::Param::updateParameterInfo() */

bool __thiscall juce::JuceVST3EditController::Param::updateParameterInfo(Param *this)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  String local_40 [8];
  String local_38 [8];
  
  cVar3 = (**(code **)(**(long **)(this + 0x340) + 0x40))();
  uVar8 = 0;
  if (cVar3 != '\0') {
    iVar5 = (**(code **)(**(long **)(this + 0x340) + 0x38))();
    uVar8 = 0;
    if (iVar5 - 1U < 0x7ffffffe) {
      uVar8 = iVar5 - 1U;
    }
  }
  (**(code **)(**(long **)(this + 0x340) + 0x28))(local_40,*(long **)(this + 0x340),0x80);
                    /* try { // try from 001afacc to 001afad5 has its CatchHandler @ 001afce7 */
  juce::String::String(local_38,(ushort *)(this + 0x14));
  bVar4 = operator==((undefined8 *)local_38,(undefined8 *)local_40);
  juce::String::~String(local_38);
  if (!bVar4) {
                    /* try { // try from 001afaf8 to 001afb01 has its CatchHandler @ 001afccf */
    puVar6 = juce::String::toUTF16(local_40);
    uVar7 = 0;
    do {
      *(ushort *)(this + uVar7 * 2 + 0x14) = puVar6[uVar7];
      if (puVar6[uVar7] == 0) break;
      bVar9 = uVar7 < 0x7f;
      uVar7 = uVar7 + 1;
    } while (bVar9);
    *(undefined2 *)(this + 0x112) = 0;
  }
  juce::String::~String(local_40);
  (**(code **)(**(long **)(this + 0x340) + 0x28))(local_40,*(long **)(this + 0x340),8);
                    /* try { // try from 001afb5e to 001afb67 has its CatchHandler @ 001afcdf */
  juce::String::String(local_38,(ushort *)(this + 0x114));
  bVar9 = operator==((undefined8 *)local_38,(undefined8 *)local_40);
  juce::String::~String(local_38);
  if (!bVar9) {
                    /* try { // try from 001afb8a to 001afb93 has its CatchHandler @ 001afcc7 */
    puVar6 = juce::String::toUTF16(local_40);
    uVar7 = 0;
    do {
      *(ushort *)(this + uVar7 * 2 + 0x114) = puVar6[uVar7];
      if (puVar6[uVar7] == 0) break;
      bVar10 = uVar7 < 0x7f;
      uVar7 = uVar7 + 1;
    } while (bVar10);
    *(undefined2 *)(this + 0x212) = 0;
  }
  juce::String::~String(local_40);
  (**(code **)(**(long **)(this + 0x340) + 0x30))(local_40);
                    /* try { // try from 001afbec to 001afbf5 has its CatchHandler @ 001afcd7 */
  juce::String::String(local_38,(ushort *)(this + 0x214));
  bVar10 = operator==((undefined8 *)local_38,(undefined8 *)local_40);
  juce::String::~String(local_38);
  if (!bVar10) {
                    /* try { // try from 001afc18 to 001afc21 has its CatchHandler @ 001afcbf */
    puVar6 = juce::String::toUTF16(local_40);
    uVar7 = 0;
    do {
      *(ushort *)(this + uVar7 * 2 + 0x214) = puVar6[uVar7];
      if (puVar6[uVar7] == 0) break;
      bVar11 = uVar7 < 0x7f;
      uVar7 = uVar7 + 1;
    } while (bVar11);
    *(undefined2 *)(this + 0x312) = 0;
  }
  juce::String::~String(local_40);
  uVar2 = *(uint *)(this + 0x314);
  *(uint *)(this + 0x314) = uVar8;
  fVar12 = (float)(**(code **)(**(long **)(this + 0x340) + 0x20))();
  dVar1 = *(double *)(this + 0x318);
  *(double *)(this + 0x318) = (double)fVar12;
  return (double)fVar12 != dVar1 || (uVar2 != uVar8 || ((!bVar4 || !bVar9) || !bVar10));
}


