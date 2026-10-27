// Function : getNumberOfMultipleClicks
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 002baf80
// Prototype: char getNumberOfMultipleClicks(MouseInputSourceImpl * this)
// Body     : 002baf80 - 002bb12c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::MouseInputSourceImpl::getNumberOfMultipleClicks() const */

char __thiscall
juce::detail::MouseInputSourceImpl::getNumberOfMultipleClicks(MouseInputSourceImpl *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  
  cVar7 = '\x01';
  if (((this[0xf8] == (MouseInputSourceImpl)0x0) &&
      (lVar6 = *(long *)(this + 0x78), *(long *)(this + 0xf0) <= lVar6 + 300)) &&
     ((double)(lVar6 - *(long *)(this + 0x98)) * DAT_00651e50 < DAT_00652e30)) {
    fVar1 = *(float *)(this + 0x70);
    fVar2 = *(float *)(&DAT_005de6b8 + (ulong)(this[0x88] == (MouseInputSourceImpl)0x0) * 4);
    if ((((float)((uint)(fVar1 - *(float *)(this + 0x90)) & _DAT_005d91c0) < fVar2) &&
        (fVar3 = *(float *)(this + 0x74),
        (float)((uint)(fVar3 - *(float *)(this + 0x94)) & _DAT_005d91c0) < fVar2)) &&
       ((iVar4 = *(int *)(this + 0xa0), *(int *)(this + 0x80) == iVar4 &&
        (iVar5 = *(int *)(this + 0x84), iVar5 == *(int *)(this + 0xa4))))) {
      cVar7 = '\x02';
      if ((((double)(lVar6 - *(long *)(this + 0xb8)) * DAT_00651e50 < DAT_005de638) &&
          ((float)((uint)(fVar1 - *(float *)(this + 0xb0)) & _DAT_005d91c0) < fVar2)) &&
         (((float)((uint)(fVar3 - *(float *)(this + 0xb4)) & _DAT_005d91c0) < fVar2 &&
          (((((iVar4 == *(int *)(this + 0xc0) && (iVar5 == *(int *)(this + 0xc4))) &&
             (cVar7 = '\x03', (double)(lVar6 - *(long *)(this + 0xd8)) * DAT_00651e50 < DAT_005de638
             )) && (((float)((uint)(fVar1 - *(float *)(this + 0xd0)) & _DAT_005d91c0) < fVar2 &&
                    ((float)((uint)(fVar3 - *(float *)(this + 0xd4)) & _DAT_005d91c0) < fVar2)))) &&
           (iVar4 == *(int *)(this + 0xe0))))))) {
        return (iVar5 == *(int *)(this + 0xe4)) + '\x03';
      }
    }
  }
  return cVar7;
}


