// Function : juce_handleXEmbedEvent
// Namespace: juce
// Entry    : 004d4890
// Prototype: ulong juce_handleXEmbedEvent(juce * this, int * param_1)
// Body     : 004d4890 - 004d4e1a


/* juce::juce_handleXEmbedEvent(juce::ComponentPeer*, void*) */

ulong __thiscall juce::juce_handleXEmbedEvent(juce *this,int *param_1)

{
  SharedKeyWindow *pSVar1;
  long *plVar2;
  undefined8 *puVar3;
  Pimpl *pPVar4;
  SharedKeyWindow *this_00;
  code *pcVar5;
  int iVar6;
  Desktop *pDVar7;
  XWindowSystem *pXVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  juce *pjVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_R14;
  undefined7 uVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  
  if (param_1 == (int *)0x0) {
    if ((XEmbedComponent::Pimpl::getWidgets()::i == '\0') &&
       (iVar6 = __cxa_guard_acquire(&XEmbedComponent::Pimpl::getWidgets()::i), iVar6 != 0)) {
      __cxa_atexit(Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0>::~Array,
                   &XEmbedComponent::Pimpl::getWidgets()::i,&__dso_handle);
      __cxa_guard_release(&XEmbedComponent::Pimpl::getWidgets()::i);
    }
    if ((long)DAT_0071dab4 != 0) {
      puVar3 = XEmbedComponent::Pimpl::getWidgets()::i + DAT_0071dab4;
      puVar17 = XEmbedComponent::Pimpl::getWidgets()::i;
LAB_004d498e:
      pPVar4 = (Pimpl *)*puVar17;
      lVar12 = *(long *)(pPVar4 + 8);
      do {
        if ((*(ushort *)(lVar12 + 0xe8) & 1) != 0) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 004d49da to 004d49e3 has its CatchHandler @ 004d4e51 */
            pDVar7 = operator_new(0x1d0);
                    /* try { // try from 004d49e7 to 004d49ee has its CatchHandler @ 004d4e3e */
            Desktop::Desktop(pDVar7);
            iVar6 = *(int *)(pDVar7 + 0xdc);
            Desktop::instance = pDVar7;
          }
          else {
            iVar6 = *(int *)(Desktop::instance + 0xdc);
          }
          if ((long)iVar6 != 0) {
            lVar15 = 0;
            goto LAB_004d4a10;
          }
          break;
        }
        lVar12 = *(long *)(lVar12 + 0x30);
      } while (lVar12 != 0);
      goto LAB_004d4a30;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 != 0) {
      if ((XEmbedComponent::Pimpl::getWidgets()::i == '\0') &&
         (iVar6 = __cxa_guard_acquire(), iVar6 != 0)) {
        __cxa_atexit(Array<juce::XEmbedComponent::Pimpl*,juce::DummyCriticalSection,0>::~Array,
                     &XEmbedComponent::Pimpl::getWidgets()::i,&__dso_handle);
        __cxa_guard_release();
      }
      if ((long)DAT_0071dab4 != 0) {
        lVar15 = 0;
        do {
          pPVar4 = *(Pimpl **)((long)XEmbedComponent::Pimpl::getWidgets()::i + lVar15);
          lVar14 = *(long *)(pPVar4 + 0x78);
          lVar10 = *(long *)(pPVar4 + 0x70);
          if (lVar12 == lVar14) {
LAB_004d4b16:
            if ((*(long *)(param_1 + 8) == lVar10) && (lVar10 != 0)) {
              uVar16 = (undefined7)((ulong)unaff_R14 >> 8);
              if (*param_1 == 0x16) {
                if (pPVar4[0xc2] == (Pimpl)0x0) {
                  plVar11 = operator_new(0x18);
                  *(undefined4 *)(plVar11 + 1) = 0;
                  *plVar11 = (long)&PTR__ReferenceCountedObject_00714c30;
                  plVar11[2] = (long)pPVar4;
                  if (((MessageManager::instance == 0) ||
                      (*(int *)(MessageManager::instance + 8) != 0)) ||
                     (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
                    LOCK();
                    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                    UNLOCK();
                    LOCK();
                    plVar2 = plVar11 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    pDVar7 = (Desktop *)CONCAT71(uVar16,1);
                    if ((int)*plVar2 == 0) {
                      (**(code **)(*plVar11 + 8))(plVar11);
                    }
                  }
                  else {
                    InternalMessageQueue::postMessage
                              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                               (long)plVar11);
                    pDVar7 = (Desktop *)CONCAT71(uVar16,1);
                  }
                }
                else {
                  XEmbedComponent::Pimpl::configureNotify(pPVar4);
                  pDVar7 = (Desktop *)CONCAT71(uVar16,1);
                }
                goto switchD_004d4b8b_caseD_11;
              }
              if (*param_1 == 0x1c) {
                pDVar7 = (Desktop *)CONCAT71(uVar16,1);
                if (*(long *)(param_1 + 10) == *(long *)(pPVar4 + 0xb0)) {
                  XEmbedComponent::Pimpl::updateMapping(pPVar4);
                }
                goto switchD_004d4b8b_caseD_11;
              }
              break;
            }
            pDVar7 = (Desktop *)0x0;
            if ((*(long *)(param_1 + 8) != lVar14) || (lVar14 == 0)) goto switchD_004d4b8b_caseD_11;
            pDVar7 = (Desktop *)0x0;
            switch(*param_1) {
            case 0x10:
              lVar12 = *(long *)(param_1 + 10);
              pDVar7 = (Desktop *)0x0;
              if ((lVar14 == lVar12) || (lVar12 == lVar10)) goto switchD_004d4b8b_caseD_11;
              break;
            default:
              goto switchD_004d4b8b_caseD_11;
            case 0x15:
              if ((*(long *)(param_1 + 0xc) != lVar14) ||
                 (lVar12 = *(long *)(param_1 + 10), lVar12 == lVar10)) goto LAB_004d4c3c;
              break;
            case 0x18:
              (**(code **)(*(long *)pPVar4 + 0x10))(pPVar4,*(undefined8 *)(pPVar4 + 8),1,1);
              pDVar7 = (Desktop *)0x1;
              goto switchD_004d4b8b_caseD_11;
            case 0x21:
              pDVar7 = (Desktop *)0x0;
              if ((*(long *)(param_1 + 10) != *(long *)(pPVar4 + 0xb8)) || (param_1[0xc] != 0x20))
              goto switchD_004d4b8b_caseD_11;
              lVar12 = *(long *)(param_1 + 0x10);
              lVar15 = *(long *)(pPVar4 + 8);
              goto LAB_004d4c70;
            }
            XEmbedComponent::Pimpl::setClient(pPVar4,lVar12);
            pDVar7 = (Desktop *)0x1;
            goto switchD_004d4b8b_caseD_11;
          }
          if (lVar12 == *(long *)(pPVar4 + 0x70)) {
            lVar10 = lVar12;
            goto LAB_004d4b16;
          }
          lVar15 = lVar15 + 8;
        } while ((long)DAT_0071dab4 * 8 != lVar15);
      }
    }
  }
LAB_004d4c3c:
  pDVar7 = (Desktop *)0x0;
  goto switchD_004d4b8b_caseD_11;
  while (lVar15 = lVar15 + 8, (long)iVar6 * 8 != lVar15) {
LAB_004d4a10:
    pjVar13 = *(juce **)(*(long *)(Desktop::instance + 0xd0) + lVar15);
    if (*(long *)(pjVar13 + 8) == lVar12) goto LAB_004d4a32;
  }
LAB_004d4a30:
  pjVar13 = (juce *)0x0;
LAB_004d4a32:
  if ((pjVar13 == this) && (*(long *)(pPVar4 + 200) != 0)) {
    this_00 = *(SharedKeyWindow **)(pPVar4 + 0xd0);
    *(undefined8 *)(pPVar4 + 0xd0) = 0;
    if (this_00 != (SharedKeyWindow *)0x0) {
      LOCK();
      pSVar1 = this_00 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        XEmbedComponent::Pimpl::SharedKeyWindow::~SharedKeyWindow(this_00);
        operator_delete(this_00);
      }
    }
    pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    lVar12 = *(long *)(pXVar8 + 0x148);
    lVar15 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar9 = (**(code **)(lVar15 + 0x2a8))(lVar12,*(undefined4 *)(lVar12 + 0xe0));
    auVar18 = XEmbedComponent::Pimpl::getX11BoundsFromJuce(pPVar4);
    if (**(long **)(pPVar4 + 0xa0) != 0) {
      lVar15 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar5 = *(code **)(lVar15 + 0x368);
      pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      (*pcVar5)(*(undefined8 *)(pXVar8 + 0x148),**(undefined8 **)(pPVar4 + 0xa0));
      pPVar4[0xa8] = (Pimpl)0x0;
    }
    lVar15 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar15 + 0x290))
              (lVar12,*(undefined8 *)(pPVar4 + 0x78),uVar9,auVar18._0_8_ & 0xffffffff,
               auVar18._0_8_ >> 0x20);
    *(undefined8 *)(pPVar4 + 200) = 0;
  }
  puVar17 = puVar17 + 1;
  if (puVar17 == puVar3) goto LAB_004d4c3c;
  goto LAB_004d498e;
  while (lVar15 = *(long *)(lVar15 + 0x30), lVar15 != 0) {
LAB_004d4c70:
    if ((*(ushort *)(lVar15 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 004d4cbf to 004d4cc8 has its CatchHandler @ 004d4e36 */
        pDVar7 = operator_new(0x1d0);
                    /* try { // try from 004d4ccc to 004d4cd3 has its CatchHandler @ 004d4e23 */
        Desktop::Desktop(pDVar7);
        Desktop::instance = pDVar7;
      }
      pDVar7 = Desktop::instance;
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar14 = 0;
        goto LAB_004d4cf4;
      }
      break;
    }
  }
  goto LAB_004d4d20;
  while (lVar14 = lVar14 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar14) {
LAB_004d4cf4:
    if (*(long *)(*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar14) + 8) == lVar15) {
      if (ComponentPeer::getNativeRealtimeModifiers._16_8_ != 0) {
                    /* try { // try from 004d4d1a to 004d4d1f has its CatchHandler @ 004d4e1b */
        (*(code *)ComponentPeer::getNativeRealtimeModifiers._24_8_)
                  (ComponentPeer::getNativeRealtimeModifiers);
      }
      break;
    }
  }
LAB_004d4d20:
  pDVar7 = (Desktop *)CONCAT71((int7)((ulong)pDVar7 >> 8),1);
  if (lVar12 == 7) {
    if (pPVar4[0xc1] != (Pimpl)0x0) {
      Component::moveKeyboardFocusToSibling(*(Component **)(pPVar4 + 8),0);
    }
  }
  else if (lVar12 == 6) {
    if (pPVar4[0xc1] != (Pimpl)0x0) {
      Component::moveKeyboardFocusToSibling(*(Component **)(pPVar4 + 8),1);
    }
  }
  else if ((lVar12 == 3) && (pPVar4[0xc1] != (Pimpl)0x0)) {
    Component::grabKeyboardFocusInternal(*(Component **)(pPVar4 + 8),2,'\x01',0);
  }
switchD_004d4b8b_caseD_11:
  return (ulong)pDVar7 & 0xffffffff;
}


