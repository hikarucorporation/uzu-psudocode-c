// Function : createXml
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c4950
// Prototype: XmlElement * createXml(SharedObject * this)
// Body     : 004c4950 - 004c4b7d


/* juce::ValueTree::SharedObject::createXml() const */

XmlElement * __thiscall juce::ValueTree::SharedObject::createXml(SharedObject *this)

{
  int iVar1;
  SharedObject *pSVar2;
  XmlElement *this_00;
  int *piVar3;
  long *plVar4;
  XmlElement *pXVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_50;
  long local_48;
  SharedObject *local_40;
  long local_38;
  
  this_00 = operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  lVar8 = *(long *)(this + 0x10);
  *(long *)(this_00 + 0x18) = lVar8;
  piVar3 = (int *)(lVar8 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_40 = this;
  if ((long)*(int *)(this + 0x24) != 0) {
    lVar6 = *(long *)(this + 0x18) + 0x10;
    lVar8 = (long)*(int *)(this + 0x24) * 0x18;
    do {
                    /* try { // try from 004c49e2 to 004c49e7 has its CatchHandler @ 004c4c3e */
      plVar4 = (long *)(**(code **)(*(long *)(lVar6 + -8) + 0x48))(lVar6);
      if (plVar4 == (long *)0x0) {
        Identifier::Identifier((Identifier *)&local_50,(long *)(lVar6 + -0x10));
                    /* try { // try from 004c4ab5 to 004c4abd has its CatchHandler @ 004c4baa */
        (**(code **)(*(long *)(lVar6 + -8) + 0x28))((juce *)&local_48,lVar6);
                    /* try { // try from 004c4abe to 004c4acb has its CatchHandler @ 004c4b7e */
        XmlElement::setAttribute(this_00,&local_50,&local_48);
        piVar3 = (int *)(local_48 + -0x10);
        if (piVar3 != &emptyString) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar3);
          }
        }
        piVar3 = (int *)(local_50 + -0x10);
        if (piVar3 != &emptyString) goto LAB_004c4b0c;
      }
      else {
        operator+((juce *)&local_48,&DAT_005e5e25,(String *)(lVar6 + -0x10));
                    /* try { // try from 004c4a07 to 004c4a13 has its CatchHandler @ 004c4c0c */
        Identifier::Identifier((Identifier *)&local_50,&local_48);
                    /* try { // try from 004c4a14 to 004c4a1e has its CatchHandler @ 004c4be0 */
        MemoryBlock::toBase64Encoding(&local_38,plVar4);
                    /* try { // try from 004c4a1f to 004c4a2e has its CatchHandler @ 004c4bb4 */
        XmlElement::setAttribute(this_00,&local_50,&local_38);
        piVar3 = (int *)(local_38 + -0x10);
        if (piVar3 != &emptyString) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar3);
          }
        }
        piVar3 = (int *)(local_50 + -0x10);
        if (piVar3 != &emptyString) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar3);
          }
        }
        piVar3 = (int *)(local_48 + -0x10);
        if (piVar3 != &emptyString) {
LAB_004c4b0c:
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar3);
          }
        }
      }
      lVar6 = lVar6 + 0x18;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  pSVar2 = local_40;
  if (0 < (int)*(uint *)(local_40 + 0x34)) {
    uVar7 = (ulong)*(uint *)(local_40 + 0x34) + 1;
    do {
      pXVar5 = createXml(*(SharedObject **)(*(long *)(pSVar2 + 0x28) + (ulong)((int)uVar7 - 2) * 8))
      ;
      if (pXVar5 != (XmlElement *)0x0) {
        *(undefined8 *)pXVar5 = *(undefined8 *)(this_00 + 8);
        *(XmlElement **)(this_00 + 8) = pXVar5;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return this_00;
}


