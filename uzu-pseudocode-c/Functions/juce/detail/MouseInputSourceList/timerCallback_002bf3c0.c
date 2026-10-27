// Function : timerCallback
// Namespace: juce:detail:MouseInputSourceList
// Entry    : 002bf3c0
// Prototype: ulong timerCallback(MouseInputSourceList * this)
// Body     : 002bf3c0 - 002bf61b


/* juce::detail::MouseInputSourceList::timerCallback() */

ulong __thiscall juce::detail::MouseInputSourceList::timerCallback(MouseInputSourceList *this)

{
  uint *puVar1;
  long *plVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  double dVar10;
  ulong uVar11;
  Desktop *pDVar12;
  XWindowSystem *this_00;
  Displays *pDVar13;
  bool bVar14;
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar5 = *(int *)(this + 0x34);
  if ((long)iVar5 != 0) {
    lVar6 = *(long *)(this + 0x28);
    lVar15 = 0;
    bVar14 = false;
    do {
      lVar7 = *(long *)(lVar6 + lVar15);
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x3c);
      if ((*(ushort *)(lVar7 + 0x3c) & 0x1f0) != 0) {
        if (ComponentPeer::getNativeRealtimeModifiers._16_8_ == 0) {
          if ((ModifierKeys::currentModifiers & 0x1f0) != 0) goto LAB_002bf45e;
        }
        else {
                    /* try { // try from 002bf428 to 002bf434 has its CatchHandler @ 002bf64a */
          uVar11 = (*(code *)ComponentPeer::getNativeRealtimeModifiers._24_8_)
                             (ComponentPeer::getNativeRealtimeModifiers);
          if ((uVar11 & 0x1f0) != 0) {
LAB_002bf45e:
            if (*(int *)(lVar7 + 0x14) == 1) {
              uVar17 = *(undefined8 *)(lVar7 + 0x20);
            }
            else {
              if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002bf47e to 002bf487 has its CatchHandler @ 002bf652 */
                pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bf48b to 002bf492 has its CatchHandler @ 002bf637 */
                Desktop::Desktop(pDVar12);
                Desktop::instance = pDVar12;
              }
              puVar8 = *(undefined8 **)(Desktop::instance + 0xe0);
                    /* try { // try from 002bf4a1 to 002bf4b4 has its CatchHandler @ 002bf652 */
              this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                                  ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>
                                    *)XWindowSystem::singletonHolder);
              uVar17 = XWindowSystem::getCurrentMousePosition(this_00);
              fVar16 = (float)((ulong)uVar17 >> 0x20);
              pDVar13 = Displays::getDisplayForPoint
                                  ((Displays *)*puVar8,*(int *)((long)puVar8 + 0xc),
                                   (ulong)((double)(float)uVar17 + DAT_005d9098) & 0xffffffff |
                                   (long)((double)fVar16 + DAT_005d9098) << 0x20);
              if (pDVar13 != (Displays *)0x0) {
                if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002bf513 to 002bf51c has its CatchHandler @ 002bf62f */
                  pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bf520 to 002bf527 has its CatchHandler @ 002bf61c */
                  Desktop::Desktop(pDVar12);
                  Desktop::instance = pDVar12;
                }
                fVar3 = *(float *)(Desktop::instance + 0x130);
                dVar10 = *(double *)(pDVar13 + 0x50) / (double)fVar3;
                auVar18._0_8_ =
                     (double)((float)uVar17 - (float)(int)*(undefined8 *)(pDVar13 + 0x44));
                auVar18._8_8_ =
                     (double)(fVar16 - (float)(int)((ulong)*(undefined8 *)(pDVar13 + 0x44) >> 0x20))
                ;
                auVar19._8_4_ = SUB84(dVar10,0);
                auVar19._0_8_ = dVar10;
                auVar19._12_4_ = (int)((ulong)dVar10 >> 0x20);
                auVar19 = divpd(auVar18,auVar19);
                uVar17 = CONCAT44(fVar3 * (float)(int)((ulong)*(undefined8 *)(pDVar13 + 4) >> 0x20)
                                  + (float)auVar19._8_8_,
                                  fVar3 * (float)(int)*(undefined8 *)(pDVar13 + 4) +
                                  (float)auVar19._0_8_);
              }
            }
            *(ulong *)(lVar7 + 0x20) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) +
                          (float)((ulong)uVar17 >> 0x20),
                          (float)*(undefined8 *)(lVar7 + 0x18) + (float)uVar17);
            uVar11 = 0;
            puVar1 = (uint *)(*(long *)(lVar7 + 8) + 0x18);
            LOCK();
            uVar4 = *puVar1;
            if (uVar4 == 0) {
              *puVar1 = 1;
            }
            else {
              uVar11 = (ulong)uVar4;
            }
            UNLOCK();
            bVar14 = true;
            if (uVar4 == 0) {
              plVar9 = *(long **)(lVar7 + 8);
              if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0))
                 || (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
                LOCK();
                *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                UNLOCK();
                LOCK();
                plVar2 = plVar9 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
                uVar11 = *(ulong *)(lVar7 + 8);
                LOCK();
                *(undefined4 *)(uVar11 + 0x18) = 0;
                UNLOCK();
              }
              else {
                uVar11 = InternalMessageQueue::postMessage
                                   ((InternalMessageQueue *)
                                    InternalMessageQueue::singletonHolder._40_8_,(long)plVar9);
              }
            }
          }
        }
      }
      lVar15 = lVar15 + 8;
    } while ((long)iVar5 * 8 != lVar15);
    if (bVar14) {
      return uVar11;
    }
  }
  uVar11 = Timer::stopTimer((Timer *)this);
  return uVar11;
}


