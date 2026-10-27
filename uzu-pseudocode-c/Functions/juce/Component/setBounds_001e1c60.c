// Function : setBounds
// Namespace: juce:Component
// Entry    : 001e1c60
// Prototype: undefined setBounds(Component * this, int param_1, int param_2, int param_3, int param_4)
// Body     : 001e1c60 - 001e2087


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Component::setBounds(int, int, int, int) */

void __thiscall
juce::Component::setBounds(Component *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  Component CVar3;
  ushort uVar4;
  long *plVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  Desktop *pDVar10;
  double dVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 local_58 [16];
  ulong local_48;
  ulong uStack_40;
  
  if (param_3 < 0) {
    param_3 = 0;
  }
  iVar19 = 0;
  if (-1 < param_4) {
    iVar19 = param_4;
  }
  bVar7 = *(int *)(this + 0x44) != iVar19;
  bVar8 = *(int *)(this + 0x40) != param_3;
  bVar13 = true;
  if ((*(int *)(this + 0x38) == param_1) &&
     (bVar13 = *(int *)(this + 0x3c) != param_2, (!bVar7 && !bVar8) && !bVar13)) {
    return;
  }
  uVar9 = isShowing(this);
  if ((char)uVar9 == '\0') {
    *(int *)(this + 0x38) = param_1;
    *(int *)(this + 0x3c) = param_2;
    *(int *)(this + 0x40) = param_3;
    *(int *)(this + 0x44) = iVar19;
    if (*(long **)(this + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x88) + 0x18))();
    }
    goto LAB_001e1e01;
  }
  if ((*(ushort *)(this + 0xe8) & 0x18) == 8) {
LAB_001e1d80:
    CVar3 = this[0xe8];
  }
  else {
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar10 = operator_new(0x1d0);
                    /* try { // try from 001e1d02 to 001e1d09 has its CatchHandler @ 001e2088 */
      Desktop::Desktop(pDVar10);
      Desktop::instance = pDVar10;
    }
    lVar12 = **(long **)(*(long *)(Desktop::instance + 0x40) + 0x28);
    if ((*(ushort *)(lVar12 + 0x3c) & 0x1f0) != 0) goto LAB_001e1d80;
    piVar1 = (int *)(*(long *)(lVar12 + 8) + 0x18);
    LOCK();
    bVar14 = *piVar1 == 0;
    if (bVar14) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (!bVar14) goto LAB_001e1d80;
    plVar5 = *(long **)(lVar12 + 8);
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      LOCK();
      *(undefined4 *)(*(long *)(lVar12 + 8) + 0x18) = 0;
      UNLOCK();
      goto LAB_001e1d80;
    }
    InternalMessageQueue::postMessage
              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar5);
    CVar3 = this[0xe8];
  }
  if (((byte)CVar3 & 1) == 0) {
    repaintParent(this);
  }
  *(int *)(this + 0x38) = param_1;
  *(int *)(this + 0x3c) = param_2;
  *(int *)(this + 0x40) = param_3;
  *(int *)(this + 0x44) = iVar19;
  if (bVar7 || bVar8) {
    internalRepaintUnchecked((long)this,0,CONCAT44(iVar19,param_3),'\x01');
  }
  else if (((byte)this[0xe8] & 1) == 0) {
    repaintParent(this);
  }
LAB_001e1e01:
  uVar4 = *(ushort *)(this + 0xe8);
  *(ushort *)(this + 0xe8) = uVar4;
  this[0xea] = (Component)
               ((byte)(((uint)(bVar7 || bVar8) << 0x13) >> 0x10) |
                (byte)(((ulong)bVar13 << 0x12) >> 0x10) | (byte)this[0xea] & 0xf3);
  if ((uVar4 & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e1e60 to 001e1e69 has its CatchHandler @ 001e20b6 */
      pDVar10 = operator_new(0x1d0);
                    /* try { // try from 001e1e6d to 001e1e74 has its CatchHandler @ 001e20a3 */
      Desktop::Desktop(pDVar10);
      iVar19 = *(int *)(pDVar10 + 0xdc);
      Desktop::instance = pDVar10;
    }
    else {
      iVar19 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar19 != 0) {
      lVar12 = 0;
      do {
        plVar5 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar12);
        if ((Component *)plVar5[1] == this) {
          if (*(float **)(this + 0x50) == (float *)0x0) {
            local_58 = *(undefined1 (*) [16])(this + 0x38);
          }
          else {
            local_58 = Rectangle<int>::transformedBy
                                 ((Rectangle<int> *)(this + 0x38),*(float **)(this + 0x50));
          }
                    /* try { // try from 001e1eed to 001e1ef5 has its CatchHandler @ 001e209b */
          fVar15 = (float)(**(code **)(*(long *)this + 0x88))(this);
          dVar11 = (double)(local_58._0_8_ >> 0x20);
          fVar17 = (float)(_DAT_005d91c0 & (uint)fVar15);
          iVar19 = local_58._4_4_;
          iVar20 = local_58._8_4_;
          iVar21 = local_58._12_4_;
          if (fVar17 == DAT_005d94c8) {
            if ((fVar15 == DAT_005d9038) && (!NAN(fVar15) && !NAN(DAT_005d9038))) goto LAB_001e1faf;
LAB_001e1f5a:
            local_58._0_8_ = (double)((float)local_58._0_4_ * fVar15) + _DAT_005d9a90;
            local_58._8_8_ = (double)((float)iVar20 * fVar15) + _UNK_005d9a98;
            dVar11 = (double)((float)iVar19 * fVar15) + _DAT_005d9a90;
            dVar16 = (double)((float)iVar21 * fVar15) + _UNK_005d9a98;
          }
          else {
            fVar18 = (float)((uint)(fVar15 + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar18) {
              fVar6 = DAT_005d9038;
              if (DAT_005d9038 <= fVar17) {
                fVar6 = fVar17;
              }
              if (fVar6 * DAT_005d94d0 < fVar18) goto LAB_001e1f5a;
            }
LAB_001e1faf:
            dVar16 = (double)(local_58._8_8_ >> 0x20);
          }
          local_48 = local_58._0_8_ & _DAT_005d9aa0 | (long)dVar11 << 0x20;
          uStack_40 = local_58._8_8_ & _UNK_005d9aa8 | (long)dVar16 << 0x20;
          (**(code **)(*plVar5 + 0x40))(plVar5,&local_48,0);
          break;
        }
        lVar12 = lVar12 + 8;
      } while ((long)iVar19 * 8 != lVar12);
    }
  }
  CVar3 = this[0xea];
  if (((byte)CVar3 & 0xc) == 0) {
    return;
  }
  *(undefined2 *)(this + 0xe8) = *(undefined2 *)(this + 0xe8);
  this[0xea] = (Component)((byte)CVar3 & 0xf3);
  sendMovedResizedMessages(this,(byte)CVar3 >> 2 & 1,(byte)CVar3 >> 3 & 1);
  return;
}


