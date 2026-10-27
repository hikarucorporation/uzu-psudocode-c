// Function : flushToTree
// Namespace: juce:AudioProcessorValueTreeState:ParameterAdapter
// Entry    : 001c2b50
// Prototype: ulong flushToTree(ParameterAdapter * this, UndoManager * param_1, UndoManager * param_2)
// Body     : 001c2b50 - 001c2d39


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessorValueTreeState::ParameterAdapter::flushToTree(juce::Identifier const&,
   juce::UndoManager*) */

ulong __thiscall
juce::AudioProcessorValueTreeState::ParameterAdapter::flushToTree
          (ParameterAdapter *this,UndoManager *param_1,UndoManager *param_2)

{
  ParameterAdapter PVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined7 uVar5;
  undefined1 *puVar6;
  long lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined1 *local_70;
  double local_68;
  undefined1 *local_60;
  double local_58 [4];
  undefined4 local_38;
  
  uVar4 = 0;
  LOCK();
  bVar8 = this[0x94] == (ParameterAdapter)0x1;
  if (bVar8) {
    this[0x94] = (ParameterAdapter)0x0;
  }
  UNLOCK();
  if (bVar8) {
    lVar3 = *(long *)(this + 8);
    if ((lVar3 != 0) && ((long)*(int *)(lVar3 + 0x24) != 0)) {
      lVar7 = *(long *)(lVar3 + 0x18) + 0x10;
      lVar3 = (long)*(int *)(lVar3 + 0x24) * 0x18;
      do {
        if (*(long *)(lVar7 + -0x10) == *(long *)param_1) {
                    /* try { // try from 001c2c75 to 001c2c77 has its CatchHandler @ 001c2d67 */
          dVar11 = (double)(**(code **)(*(long *)(lVar7 + -8) + 0x20))();
          fVar9 = (float)dVar11;
          fVar10 = *(float *)(this + 0x90);
          fVar13 = (float)((uint)fVar9 & _DAT_005d91c0);
          uVar5 = (undefined7)((ulong)lVar3 >> 8);
          if ((fVar13 == DAT_005d94c8) ||
             (fVar12 = (float)(_DAT_005d91c0 & (uint)fVar10), fVar12 == DAT_005d94c8)) {
            uVar4 = CONCAT71(uVar5,1);
            if ((fVar9 == fVar10) && (!NAN(fVar9) && !NAN(fVar10))) goto LAB_001c2c60;
          }
          else {
            fVar10 = (float)((uint)(fVar9 - fVar10) & _DAT_005d91c0);
            uVar4 = CONCAT71(uVar5,1);
            if (fVar10 <= DAT_005d94cc) goto LAB_001c2c60;
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            if (fVar10 <= fVar12 * DAT_005d94d0) goto LAB_001c2c60;
          }
          PVar1 = this[0x96];
          this[0x96] = (ParameterAdapter)0x1;
          local_58[0] = (double)*(float *)(this + 0x90);
          local_60 = &var::Instance::attributesDouble;
                    /* try { // try from 001c2d10 to 001c2d22 has its CatchHandler @ 001c2d42 */
          ValueTree::setProperty((ValueTree *)(this + 8),(long *)param_1,(long *)&local_60,param_2);
                    /* try { // try from 001c2d28 to 001c2d2d has its CatchHandler @ 001c2d3a */
          (**(code **)(local_60 + 0x58))(local_58);
          this[0x96] = PVar1;
          goto LAB_001c2c5e;
        }
        lVar7 = lVar7 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    param_2 = (UndoManager *)0x0;
    local_68 = (double)*(float *)(this + 0x90);
    local_70 = &var::Instance::attributesDouble;
    puVar6 = *(undefined1 **)(this + 8);
                    /* try { // try from 001c2bf5 to 001c2c01 has its CatchHandler @ 001c2d6f */
    if ((puVar6 != (undefined1 *)0x0) &&
       (uVar2 = NamedValueSet::set((NamedValueSet *)(puVar6 + 0x18),(long *)param_1,
                                   (long *)&local_70), (char)uVar2 != '\0')) {
      LOCK();
      *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) + 1;
      UNLOCK();
      local_58[2] = 0.0;
      local_58[3] = 0.0;
      local_58[0] = 0.0;
      local_58[1] = 0.0;
      local_38 = 0;
      local_60 = puVar6;
      do {
                    /* try { // try from 001c2c30 to 001c2c3f has its CatchHandler @ 001c2d7c */
        param_2 = param_1;
        ValueTree::SharedObject::
        callListeners<juce::ValueTree::SharedObject::sendPropertyChangeMessage(juce::Identifier_const&,juce::ValueTree::Listener*)::_lambda(juce::ValueTree::Listener&)_1_>
                  ((long)puVar6,(long *)0x0,&local_60,param_1);
        puVar6 = *(undefined1 **)(puVar6 + 0x48);
      } while (puVar6 != (undefined1 *)0x0);
      ValueTree::~ValueTree((ValueTree *)&local_60);
    }
                    /* try { // try from 001c2c58 to 001c2c5d has its CatchHandler @ 001c2d74 */
    (**(code **)(local_70 + 0x58))(&local_68);
LAB_001c2c5e:
    uVar4 = CONCAT71((int7)((ulong)param_2 >> 8),1);
  }
LAB_001c2c60:
  return uVar4 & 0xffffffff;
}


