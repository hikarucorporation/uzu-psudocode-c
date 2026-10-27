// Function : DirectoryIterator
// Namespace: juce:DirectoryIterator
// Entry    : 004989c0
// Prototype: undefined DirectoryIterator(DirectoryIterator * this, long * param_2, DirectoryIterator param_3, long * param_4, undefined4 param_5, int param_6, undefined8 * param_7)
// Body     : 004989c0 - 00498ce2


/* juce::DirectoryIterator::DirectoryIterator(juce::File const&, bool, juce::String const&, int,
   juce::File::FollowSymlinks, std::set<juce::File, std::less<juce::File>,
   std::allocator<juce::File> >*) */

void __thiscall
juce::DirectoryIterator::DirectoryIterator
          (DirectoryIterator *this,long *param_2,DirectoryIterator param_3,long *param_4,
          undefined4 param_5,int param_6,undefined8 *param_7)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  File *this_00;
  DIR *pDVar6;
  _Rb_tree_node_base *p_Var7;
  bool bVar8;
  long *plVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  _Rb_tree_node_base *p_Var12;
  int *piVar13;
  byte *pbVar14;
  long lVar15;
  long local_38;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 004989f0 to 00498a02 has its CatchHandler @ 00498dc4 */
  StringArray::addTokens((StringArray *)this,(byte *)*param_4,&DAT_005e5e2d,&DAT_005e5e30);
  if ((long)*(int *)(this + 0xc) != 0) {
    plVar9 = *(long **)this;
    lVar15 = (long)*(int *)(this + 0xc) << 3;
    do {
                    /* try { // try from 00498a3a to 00498a44 has its CatchHandler @ 00498dc6 */
      juce::String::trim(&local_38,plVar9);
      lVar3 = *plVar9;
      *plVar9 = local_38;
      piVar13 = (int *)(lVar3 + -0x10);
      local_38 = lVar3;
      if (piVar13 != &emptyString) {
        LOCK();
        iVar2 = *piVar13;
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar13);
        }
      }
      plVar9 = plVar9 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  StringArray::removeEmptyStrings((Array<juce::String,juce::DummyCriticalSection,0> *)this);
  if ((param_3 == (DirectoryIterator)0x0) && (*(int *)(this + 0xc) < 2)) {
    puVar11 = (undefined4 *)*param_4;
    if (puVar11 != (undefined4 *)&DAT_0061ac58) {
      LOCK();
      puVar11[-4] = puVar11[-4] + 1;
      UNLOCK();
    }
  }
  else {
                    /* try { // try from 00498aa7 to 00498ab0 has its CatchHandler @ 00498d55 */
    puVar5 = operator_new__(0x1b);
    LOCK();
    *puVar5 = 0;
    UNLOCK();
    *(undefined8 *)(puVar5 + 2) = 4;
    puVar11 = puVar5 + 4;
    *(undefined2 *)(puVar5 + 4) = 0x2a;
  }
                    /* try { // try from 00498acf to 00498ad8 has its CatchHandler @ 00498d99 */
  this_00 = operator_new(0x18);
                    /* try { // try from 00498ae0 to 00498ae7 has its CatchHandler @ 00498d8c */
  File::addTrailingSeparator(this_00,(char *)*param_2);
  *(undefined4 **)(this_00 + 8) = puVar11;
  piVar13 = puVar11 + -4;
  if (piVar13 == &emptyString) {
    pDVar6 = opendir((char *)*param_2);
    *(DIR **)(this_00 + 0x10) = pDVar6;
    *(File **)(this + 0x10) = this_00;
  }
  else {
    LOCK();
    *piVar13 = *piVar13 + 1;
    UNLOCK();
    pDVar6 = opendir((char *)*param_2);
    *(DIR **)(this_00 + 0x10) = pDVar6;
    *(File **)(this + 0x10) = this_00;
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar13);
    }
  }
  lVar15 = *param_4;
  *(long *)(this + 0x18) = lVar15;
  piVar13 = (int *)(lVar15 + -0x10);
  if (piVar13 != &emptyString) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    UNLOCK();
  }
                    /* try { // try from 00498b67 to 00498b6b has its CatchHandler @ 00498d57 */
  File::addTrailingSeparator((File *)(this + 0x20),(char *)*param_2);
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x30) = param_5;
  this[0x34] = param_3;
  this[0x35] = (DirectoryIterator)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined1 **)(this + 0x40) = &DAT_0061ac58;
  *(int *)(this + 0x48) = param_6;
  *(undefined8 **)(this + 0x50) = param_7;
  *(undefined8 *)(this + 0x58) = 0;
  if (param_6 != 1) {
    return;
  }
  if (param_7 == (undefined8 *)0x0) {
                    /* try { // try from 00498bc3 to 00498bcc has its CatchHandler @ 00498ce5 */
    param_7 = operator_new(0x30);
    param_7[2] = 0;
    param_7[3] = 0;
    *param_7 = 0;
    param_7[1] = 0;
    param_7[3] = param_7 + 1;
    param_7[4] = param_7 + 1;
    param_7[5] = 0;
    *(undefined8 **)(this + 0x58) = param_7;
    *(undefined8 **)(this + 0x50) = param_7;
  }
  p_Var1 = (_Rb_tree_node_base *)(param_7 + 1);
  p_Var12 = p_Var1;
  if ((_Rb_tree_node_base *)param_7[2] == (_Rb_tree_node_base *)0x0) {
LAB_00498c3a:
    if (p_Var12 == (_Rb_tree_node_base *)param_7[3]) goto LAB_00498c6f;
    lVar15 = std::_Rb_tree_decrement(p_Var12);
    pbVar10 = (byte *)*param_2;
    pbVar14 = *(byte **)(lVar15 + 0x20);
    if (pbVar14 == pbVar10) {
      return;
    }
  }
  else {
    pbVar10 = (byte *)*param_2;
    p_Var7 = (_Rb_tree_node_base *)param_7[2];
    do {
      while ((p_Var12 = p_Var7, pbVar10 != *(byte **)(p_Var12 + 0x20) &&
             (uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                (pbVar10,*(byte **)(p_Var12 + 0x20)), (int)uVar4 < 0))) {
        p_Var7 = *(_Rb_tree_node_base **)(p_Var12 + 0x10);
        if (*(_Rb_tree_node_base **)(p_Var12 + 0x10) == (_Rb_tree_node_base *)0x0)
        goto LAB_00498c3a;
      }
      p_Var7 = *(_Rb_tree_node_base **)(p_Var12 + 0x18);
    } while (*(_Rb_tree_node_base **)(p_Var12 + 0x18) != (_Rb_tree_node_base *)0x0);
    pbVar14 = *(byte **)(p_Var12 + 0x20);
    if (pbVar14 == pbVar10) {
      return;
    }
  }
  uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (pbVar14,pbVar10);
  if (-1 < (int)uVar4) {
    return;
  }
LAB_00498c6f:
  if (p_Var12 != (_Rb_tree_node_base *)0x0) {
    if (p_Var12 == p_Var1) {
      bVar8 = true;
    }
    else if ((byte *)*param_2 == *(byte **)(p_Var12 + 0x20)) {
      bVar8 = false;
    }
    else {
      uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)*param_2,*(byte **)(p_Var12 + 0x20));
      bVar8 = SUB41(uVar4 >> 0x1f,0);
    }
                    /* try { // try from 00498c98 to 00498ca1 has its CatchHandler @ 00498ce3 */
    p_Var7 = operator_new(0x28);
    lVar15 = *param_2;
    *(long *)(p_Var7 + 0x20) = lVar15;
    piVar13 = (int *)(lVar15 + -0x10);
    if (piVar13 != &emptyString) {
      LOCK();
      *piVar13 = *piVar13 + 1;
      UNLOCK();
    }
    std::_Rb_tree_insert_and_rebalance(bVar8,p_Var7,p_Var12,p_Var1);
    param_7[5] = param_7[5] + 1;
  }
  return;
}


