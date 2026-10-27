// Function : parseUsePath
// Namespace: juce:SVGState
// Entry    : 002b5c10
// Prototype: ulong parseUsePath(SVGState * this, long * param_1, undefined8 param_2)
// Body     : 002b5c10 - 002b5c97


/* juce::SVGState::parseUsePath(juce::SVGState::XmlPath const&, juce::Path&) const */

ulong __thiscall juce::SVGState::parseUsePath(SVGState *this,long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  char *local_30;
  SVGState *local_28;
  undefined8 local_20;
  
  getLinkedID((SVGState *)&local_30,param_1);
  if (*local_30 == '\0') {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 002b5c40 to 002b5c51 has its CatchHandler @ 002b5c98 */
    local_28 = this;
    local_20 = param_2;
    uVar2 = XmlPath::applyOperationToChildWithID<juce::SVGState::UsePathOp>
                      ((XmlPath *)(this + 8),&local_30,&local_28);
    uVar2 = uVar2 & 0xffffffff;
  }
  if (local_30 != "") {
    piVar3 = (int *)(local_30 + -0x10);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  return uVar2;
}


