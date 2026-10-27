// Function : handleWindowMessage
// Namespace: juce:XWindowSystem
// Entry    : 002c4cc0
// Prototype: undefined handleWindowMessage(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, XWindowSystem * this, LinuxComponentPeer * param_5, int * param_6)
// Body     : 002c4cc0 - 002c84e4


/* WARNING: Type propagation algorithm not settling */
/* juce::XWindowSystem::handleWindowMessage(juce::LinuxComponentPeer*, _XEvent&) const */

void __thiscall
juce::XWindowSystem::handleWindowMessage
          (undefined8 param_1_00,undefined8 param_2_00,double param_3,XWindowSystem *this,
          LinuxComponentPeer *param_5,int *param_6)

{
  StringArray *this_00;
  LinuxComponentPeer LVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  __time_t _Var12;
  __suseconds_t _Var13;
  long lVar14;
  byte bVar15;
  char cVar16;
  X11DragState XVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  XWindowSystem *pXVar25;
  undefined4 *puVar26;
  X11DragState *pXVar27;
  XWindowSystem *pXVar28;
  long *plVar29;
  ComponentPeer *this_01;
  byte *pbVar30;
  byte *pbVar31;
  void *pvVar32;
  Desktop *pDVar33;
  Component *pCVar34;
  Component *pCVar35;
  long lVar36;
  byte *pbVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  int iVar42;
  LinuxComponentPeer *pLVar43;
  int iVar44;
  ulong uVar45;
  uint uVar46;
  int *piVar47;
  undefined8 uVar48;
  LinuxComponentPeer *pLVar49;
  long lVar50;
  uint uVar51;
  Component *pCVar52;
  bool bVar53;
  float fVar54;
  double dVar55;
  X11DragState *pXVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar64;
  LinuxComponentPeer *local_168;
  undefined8 uStack_160;
  X11DragState *local_158;
  undefined8 uStack_150;
  LinuxComponentPeer *local_140;
  timeval local_138;
  ulong uStack_128;
  long lStack_120;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte *local_78;
  ulong uStack_70;
  double local_60;
  double local_58;
  double local_50;
  byte *local_48;
  uint local_3c;
  LinuxComponentPeer *local_38;
  
  uVar51 = ModifierKeys::currentModifiers;
  local_168 = param_5;
  local_38 = param_5;
  switch(*param_6) {
  case 2:
    if (Keys::modifierKeysAreStale == '\x01') {
      pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           singletonHolder);
      getNativeRealtimeModifiers(pXVar25);
      Keys::modifierKeysAreStale = '\0';
    }
    local_108 = 0;
    lStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    lStack_120 = 0;
    local_138.tv_sec = 0;
    local_138.tv_usec = 0;
    if ((singletonHolder._40_8_ != 0) &&
       (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar24 + 0x210))(lVar22);
    }
    Keys::keyStates[param_6[0x15] >> 3] =
         Keys::keyStates[param_6[0x15] >> 3] | (byte)(1 << ((byte)param_6[0x15] & 7));
    pbVar37 = (byte *)setlocale(6,(char *)0x0);
    pbVar30 = &DAT_0061ac58;
    if ((pbVar37 != (byte *)0x0) && (bVar15 = *pbVar37, bVar15 != 0)) {
      lVar22 = 0;
      pbVar30 = pbVar37;
      do {
        pbVar30 = pbVar30 + 1;
        lVar24 = lVar22 + (ulong)(bVar15 >> 7);
        lVar22 = lVar24 + 1;
        bVar15 = *pbVar30;
      } while (bVar15 != 0);
      uVar41 = lVar24 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002c5af4 to 002c5af8 has its CatchHandler @ 002c8660 */
      puVar26 = operator_new__(uVar41 + 0x17);
      LOCK();
      *puVar26 = 0;
      UNLOCK();
      *(ulong *)(puVar26 + 2) = uVar41;
      pbVar30 = (byte *)(puVar26 + 4);
      bVar15 = *pbVar37;
      pbVar31 = pbVar30;
      if (bVar15 != 0) {
        do {
          pbVar37 = pbVar37 + 1;
          if ((char)bVar15 < '\0') {
            *pbVar31 = bVar15 >> 6 | 0xc0;
            pbVar31[1] = bVar15 & 0x3f | 0x80;
            pbVar31 = pbVar31 + 1;
          }
          else {
            *pbVar31 = bVar15;
          }
          pbVar31 = pbVar31 + 1;
          bVar15 = *pbVar37;
        } while (bVar15 != 0);
      }
      *pbVar31 = 0;
    }
    setlocale(6,"");
                    /* try { // try from 002c6309 to 002c632d has its CatchHandler @ 002c8764 */
    lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar22 + 0x218))(param_6,&local_138,0x40,&local_78,0);
    if (*pbVar30 != 0) {
      setlocale(6,(char *)pbVar30);
    }
    uVar39 = (uint)(byte)local_138.tv_sec;
    if ((char)(byte)local_138.tv_sec < '\0') {
      uVar39 = (uint)(byte)local_138.tv_sec;
      if ((local_138.tv_sec & 0x40U) == 0) {
        uVar39 = uVar39 & 0x7f;
      }
      else {
        uVar20 = 0x3f;
        if ((local_138.tv_sec & 0x20U) != 0) {
          uVar20 = uVar39 & 0x10 ^ 0x1f;
        }
        uVar39 = uVar20 & uVar39;
        if (((local_138.tv_sec._1_1_ & 0xffffffc0) == 0x80) &&
           (uVar39 = local_138.tv_sec._1_1_ & 0x3f | uVar39 << 6, (local_138.tv_sec & 0x20U) != 0))
        {
          if (((local_138.tv_sec._2_1_ & 0xffffffc0) == 0x80) &&
             (uVar39 = local_138.tv_sec._2_1_ & 0x3f | uVar39 << 6,
             ((byte)local_138.tv_sec >> 5 & (local_138.tv_sec & 0x10U) == 0) == 0)) {
            if ((local_138.tv_sec._3_1_ & 0xffffffc0) == 0x80) {
              uVar39 = uVar39 << 6 | local_138.tv_sec._3_1_ & 0x3f;
            }
          }
        }
      }
    }
    uVar20 = uVar39;
    if (uVar39 < 0x20) {
                    /* try { // try from 002c75d1 to 002c75d5 has its CatchHandler @ 002c8764 */
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    /* try { // try from 002c75ef to 002c75f6 has its CatchHandler @ 002c8678 */
      uVar20 = (**(code **)(lVar22 + 0x1f8))
                         (*(undefined8 *)(this + 0x148),(char)param_6[0x15],0,
                          ModifierKeys::currentModifiers & 1);
    }
    bVar53 = false;
    uVar40 = 0;
    if ((long)local_78 < 0xffe1) {
      if (local_78 != (byte *)0x0) {
        if (local_78 != (byte *)0xff14) {
          if (local_78 != (byte *)0xff7f) goto switchD_002c7627_caseD_ffe6;
          pbVar37 = &Keys::numLock;
          goto LAB_002c766c;
        }
        bVar53 = false;
        goto LAB_002c767c;
      }
    }
    else {
      switch(local_78) {
      case (byte *)0xffe1:
      case (byte *)0xffe2:
        uVar40 = 1;
        bVar53 = false;
        break;
      case (byte *)0xffe3:
      case (byte *)0xffe4:
        uVar40 = 2;
        bVar53 = false;
        break;
      case (byte *)0xffe5:
        pbVar37 = &Keys::capsLock;
LAB_002c766c:
        *pbVar37 = *pbVar37 ^ 1;
        bVar53 = false;
        uVar40 = 0;
        break;
      default:
switchD_002c7627_caseD_ffe6:
        bVar53 = true;
        break;
      case (byte *)0xffe9:
      case (byte *)0xffea:
        uVar40 = 4;
        bVar53 = false;
      }
LAB_002c767c:
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers | uVar40;
    }
    pbVar30 = pbVar30 + -0x10;
    if (pbVar30 != (byte *)&emptyString) {
      LOCK();
      iVar19 = *(int *)pbVar30;
      *(int *)pbVar30 = *(int *)pbVar30 + -1;
      UNLOCK();
      if (iVar19 == 0) {
        operator_delete__(pbVar30);
      }
    }
    if ((singletonHolder._40_8_ != 0) &&
       (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
                    /* try { // try from 002c76c5 to 002c76d2 has its CatchHandler @ 002c86e3 */
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar24 + 0x360))(lVar22);
    }
    if ((uVar20 != 0xfe20) && (((uint)local_78 & 0xff00) != 0xff00)) {
LAB_002c76f6:
      bVar11 = false;
      uVar40 = uVar20;
      goto switchD_002c7730_caseD_ffab;
    }
    bVar15 = 99;
    uVar40 = 0x2b;
    bVar11 = false;
    uVar46 = 0xff0d;
    switch(local_78) {
    case (byte *)0xff8d:
switchD_002c7730_caseD_ff8d:
      uVar40 = uVar46 & 0xff;
      goto LAB_002c7e35;
    default:
      bVar11 = true;
      bVar15 = (byte)uVar20;
      uVar46 = uVar20;
      switch(uVar20) {
      case 0xff08:
      case 0xff09:
      case 0xff0d:
      case 0xff1b:
        goto switchD_002c7730_caseD_ff8d;
      case 0xff0a:
      case 0xff0b:
      case 0xff0c:
      case 0xff0e:
      case 0xff0f:
      case 0xff10:
      case 0xff11:
      case 0xff12:
      case 0xff13:
      case 0xff14:
      case 0xff15:
      case 0xff16:
      case 0xff17:
      case 0xff18:
      case 0xff19:
      case 0xff1a:
      case 0xff1c:
      case 0xff1d:
      case 0xff1e:
      case 0xff1f:
      case 0xff20:
      case 0xff21:
      case 0xff22:
      case 0xff23:
      case 0xff24:
      case 0xff25:
      case 0xff26:
      case 0xff27:
      case 0xff28:
      case 0xff29:
      case 0xff2a:
      case 0xff2b:
      case 0xff2c:
      case 0xff2d:
      case 0xff2e:
      case 0xff2f:
      case 0xff30:
      case 0xff31:
      case 0xff32:
      case 0xff33:
      case 0xff34:
      case 0xff35:
      case 0xff36:
      case 0xff37:
      case 0xff38:
      case 0xff39:
      case 0xff3a:
      case 0xff3b:
      case 0xff3c:
      case 0xff3d:
      case 0xff3e:
      case 0xff3f:
      case 0xff40:
      case 0xff41:
      case 0xff42:
      case 0xff43:
      case 0xff44:
      case 0xff45:
      case 0xff46:
      case 0xff47:
      case 0xff48:
      case 0xff49:
      case 0xff4a:
      case 0xff4b:
      case 0xff4c:
      case 0xff4d:
      case 0xff4e:
      case 0xff4f:
      case 0xff58:
      case 0xff59:
      case 0xff5a:
      case 0xff5b:
      case 0xff5c:
      case 0xff5d:
      case 0xff5e:
      case 0xff5f:
      case 0xff60:
      case 0xff61:
      case 0xff62:
        break;
      case 0xff50:
      case 0xff51:
      case 0xff52:
      case 0xff53:
      case 0xff54:
      case 0xff55:
      case 0xff56:
      case 0xff57:
      case 0xff63:
        goto switchD_002c7730_caseD_ff9e;
      default:
        if (uVar20 == 0xfe20) {
          uVar40 = 9;
          goto switchD_002c7730_caseD_ffab;
        }
        if (uVar20 == 0xffff) {
          bVar15 = 0xff;
          goto switchD_002c7730_caseD_ff9e;
        }
      }
      if ((byte *)0x22 < local_78 + -0xffbe) goto LAB_002c76f6;
      uVar40 = (uint)local_78 & 0xff | 0x10000000;
      break;
    case (byte *)0xff95:
      bVar15 = 0x50;
    case (byte *)0xff9e:
switchD_002c7730_caseD_ff9e:
      uVar40 = bVar15 | 0x10000000;
LAB_002c7e35:
      bVar11 = true;
      break;
    case (byte *)0xff96:
      bVar15 = 0x51;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff97:
      bVar15 = 0x52;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff98:
      bVar15 = 0x53;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff99:
      bVar15 = 0x54;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff9a:
      bVar15 = 0x55;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff9b:
      bVar15 = 0x56;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff9c:
      bVar15 = 0x57;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xff9f:
    case (byte *)0xffff:
      bVar15 = 0xff;
      goto switchD_002c7730_caseD_ff9e;
    case (byte *)0xffaa:
      uVar40 = 0x2a;
      bVar11 = false;
      break;
    case (byte *)0xffab:
      break;
    case (byte *)0xffad:
      uVar40 = 0xad;
      bVar11 = false;
      break;
    case (byte *)0xffaf:
      uVar40 = 0x2f;
      bVar11 = false;
      break;
    case (byte *)0xffb0:
      uVar40 = 0x30;
      bVar11 = false;
      break;
    case (byte *)0xffb1:
      uVar40 = 0x31;
      bVar11 = false;
      break;
    case (byte *)0xffb2:
      uVar40 = 0x32;
      bVar11 = false;
      break;
    case (byte *)0xffb3:
      uVar40 = 0x33;
      bVar11 = false;
      break;
    case (byte *)0xffb4:
      uVar40 = 0x34;
      bVar11 = false;
      break;
    case (byte *)0xffb5:
      uVar40 = 0x35;
      bVar11 = false;
      break;
    case (byte *)0xffb6:
      uVar40 = 0x36;
      bVar11 = false;
      break;
    case (byte *)0xffb7:
      uVar40 = 0x37;
      bVar11 = false;
      break;
    case (byte *)0xffb8:
      uVar40 = 0x38;
      bVar11 = false;
      break;
    case (byte *)0xffb9:
      uVar40 = 0x39;
      bVar11 = false;
    }
switchD_002c7730_caseD_ffab:
    if (((byte)local_138.tv_sec != '\0') ||
       (((byte *)0x7 < local_78 && (((ulong)local_78 & 0xff00) == 0)))) {
      bVar11 = true;
    }
    if (uVar51 != ModifierKeys::currentModifiers) {
      ComponentPeer::handleModifierKeysChange((ComponentPeer *)param_5);
    }
    if (bVar53) {
      ComponentPeer::handleKeyUpOrDown(*(ComponentPeer **)(param_5 + 8),1);
    }
    if (bVar11) {
      local_168 = (LinuxComponentPeer *)
                  (CONCAT44(ModifierKeys::currentModifiers,uVar40) & 0xfffffe0fffffffff);
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar39);
      pCVar52 = Component::currentlyFocusedComponent;
      if (Component::currentlyFocusedComponent == (Component *)0x0) {
        pCVar52 = *(Component **)(param_5 + 8);
      }
      if (ModalComponentManager::singletonHolder != 0) {
        if (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24)) {
          uVar41 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
          do {
            lVar22 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                              (ulong)((int)uVar41 - 2) * 8);
            if (*(char *)(lVar22 + 0x5c) != '\0') {
              pCVar35 = *(Component **)(lVar22 + 0x40);
              if ((pCVar35 != (Component *)0x0) && (pCVar35 != pCVar52)) {
                pCVar34 = pCVar52;
                goto LAB_002c7f12;
              }
              break;
            }
            uVar41 = uVar41 - 1;
          } while (1 < uVar41);
        }
      }
LAB_002c82ce:
      if (pCVar52 != (Component *)0x0) {
        do {
          plVar29 = *(long **)(pCVar52 + 0xd8);
          if (plVar29 == (long *)0x0) {
            plVar29 = operator_new(0x18);
            *(undefined4 *)(plVar29 + 1) = 0;
            *plVar29 = (long)&PTR__ReferenceCountedObject_00714b80;
            plVar29[2] = (long)pCVar52;
            LOCK();
            *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
            UNLOCK();
            plVar5 = *(long **)(pCVar52 + 0xd8);
            *(long **)(pCVar52 + 0xd8) = plVar29;
            if (plVar5 == (long *)0x0) goto LAB_002c82e8;
            LOCK();
            plVar29 = plVar5 + 1;
            *(int *)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
            plVar29 = *(long **)(pCVar52 + 0xd8);
            if (plVar29 != (long *)0x0) goto LAB_002c82e8;
            plVar29 = (long *)0x0;
            plVar5 = *(long **)(pCVar52 + 0x98);
          }
          else {
LAB_002c82e8:
            LOCK();
            *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
            UNLOCK();
            plVar5 = *(long **)(pCVar52 + 0x98);
          }
          if ((plVar5 != (long *)0x0) && (0 < *(int *)((long)plVar5 + 0xc))) {
            uVar51 = *(int *)((long)plVar5 + 0xc) - 1;
            if (plVar29 == (long *)0x0) {
              plVar29 = *(long **)(*plVar5 + (ulong)uVar51 * 8);
              (**(code **)(*plVar29 + 0x10))(plVar29,&local_168,pCVar52);
              return;
            }
            do {
              plVar6 = *(long **)(*plVar5 + (ulong)uVar51 * 8);
                    /* try { // try from 002c832c to 002c8334 has its CatchHandler @ 002c8857 */
              cVar16 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_168,pCVar52);
              if (cVar16 != '\0') {
                bVar11 = true;
                bVar53 = true;
                cVar16 = '\x01';
                goto joined_r0x002c841d;
              }
              if (plVar29[2] == 0) {
                cVar16 = '\x01';
                LOCK();
                plVar5 = plVar29 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                iVar19 = (int)*plVar5;
                UNLOCK();
                bVar53 = false;
                goto joined_r0x002c8458;
              }
              uVar39 = uVar51;
              if ((int)*(uint *)((long)plVar5 + 0xc) < (int)uVar51) {
                uVar39 = *(uint *)((long)plVar5 + 0xc);
              }
              uVar51 = uVar39 - 1;
            } while (0 < (int)uVar39);
          }
                    /* try { // try from 002c83cd to 002c83d8 has its CatchHandler @ 002c875f */
          cVar16 = (**(code **)(*(long *)pCVar52 + 0x108))(pCVar52,&local_168);
          if (cVar16 == '\0') {
            if (plVar29 == (long *)0x0) {
              lVar22 = 0;
            }
            else {
              lVar22 = plVar29[2];
            }
            cVar16 = (lVar22 == 0) * '\x02';
            bVar11 = false;
            bVar53 = false;
          }
          else {
            bVar11 = true;
            bVar53 = true;
            cVar16 = '\x02';
          }
joined_r0x002c841d:
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar5 = plVar29 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            iVar19 = (int)*plVar5;
            UNLOCK();
            bVar53 = bVar11;
joined_r0x002c8458:
            if (iVar19 == 0) {
              (**(code **)(*plVar29 + 8))(plVar29);
            }
          }
          if (cVar16 != '\0') {
            if (cVar16 != '\x02') {
              return;
            }
            break;
          }
          pCVar52 = *(Component **)(pCVar52 + 0x30);
        } while (pCVar52 != (Component *)0x0);
        if (bVar53) {
          return;
        }
      }
      if (((int)local_168 == 9) && (Component::currentlyFocusedComponent != (Component *)0x0)) {
        Component::moveKeyboardFocusToSibling
                  (Component::currentlyFocusedComponent,((ulong)local_168 & 0x100000000) == 0);
      }
    }
    break;
  case 3:
    lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar19 = (**(code **)(lVar22 + 0x250))(*(undefined8 *)(this + 0x148));
    if (iVar19 != 0) {
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar22 + 0x248))(*(undefined8 *)(this + 0x148),&local_138);
      if ((((int)local_138.tv_sec == 2) && (local_e8._4_4_ == param_6[0x15])) &&
         (lStack_100 == *(long *)(param_6 + 0xe))) {
        return;
      }
    }
    Keys::keyStates[param_6[0x15] >> 3] =
         Keys::keyStates[param_6[0x15] >> 3] & ~(byte)(1 << ((byte)param_6[0x15] & 7));
    if ((singletonHolder._40_8_ != 0) &&
       (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar24 + 0x210))(lVar22);
    }
                    /* try { // try from 002c5bfb to 002c5c19 has its CatchHandler @ 002c8755 */
    lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    lVar22 = (**(code **)(lVar22 + 0x1f8))(*(undefined8 *)(this + 0x148),(char)param_6[0x15],0,0);
    if ((singletonHolder._40_8_ != 0) &&
       (lVar24 = *(long *)(singletonHolder._40_8_ + 0x148), lVar24 != 0)) {
                    /* try { // try from 002c5c35 to 002c5c42 has its CatchHandler @ 002c86db */
      lVar50 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar50 + 0x360))(lVar24);
    }
    uVar51 = 0xffffffff;
    if (lVar22 < 0xffe1) {
      if (lVar22 == 0) {
        return;
      }
      if ((lVar22 != 0xff14) && (lVar22 != 0xff7f)) goto switchD_002c5c7a_caseD_ffe6;
    }
    else {
      switch(lVar22) {
      case 0xffe1:
      case 0xffe2:
        uVar51 = 0xfffffffe;
        break;
      case 0xffe3:
      case 0xffe4:
        uVar51 = 0xfffffffd;
        break;
      case 0xffe5:
        break;
      default:
switchD_002c5c7a_caseD_ffe6:
        ComponentPeer::handleKeyUpOrDown(*(ComponentPeer **)(param_5 + 8),0);
        return;
      case 0xffe9:
      case 0xffea:
        uVar51 = 0xfffffffb;
      }
    }
    uVar51 = uVar51 & ModifierKeys::currentModifiers;
    bVar53 = ModifierKeys::currentModifiers != uVar51;
    ModifierKeys::currentModifiers = uVar51;
    if (bVar53) {
      ComponentPeer::handleModifierKeysChange((ComponentPeer *)param_5);
    }
    break;
  case 4:
    uVar51 = param_6[0x14];
    uVar20 = uVar51 >> 1 & 2;
    uVar39 = uVar20 + 4;
    if ((Keys::AltMask & uVar51) == 0) {
      uVar39 = uVar20;
    }
    ModifierKeys::currentModifiers = ModifierKeys::currentModifiers & 0x1f0 | uVar39 + (uVar51 & 1);
    Keys::numLock = (Keys::NumLockMask & uVar51) != 0;
    Keys::capsLock = (byte)uVar51 >> 1 & 1;
    if (8 < param_6[0x15] - 1U) {
      return;
    }
    switch(this[(ulong)(param_6[0x15] - 1U) + 0x194]) {
    case (XWindowSystem)0x1:
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers | 0x10;
      LinuxComponentPeer::toFront(param_5,1);
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      lVar22 = *(long *)(param_6 + 0xe);
      uVar23 = *(undefined8 *)(param_6 + 0x10);
      uVar39 = ModifierKeys::currentModifiers;
      pXVar27 = local_158;
      break;
    case (XWindowSystem)0x2:
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers | 0x40;
      LinuxComponentPeer::toFront(param_5,1);
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      lVar22 = *(long *)(param_6 + 0xe);
      uVar23 = *(undefined8 *)(param_6 + 0x10);
      uVar39 = ModifierKeys::currentModifiers;
      pXVar27 = local_158;
      break;
    case (XWindowSystem)0x3:
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers | 0x20;
      LinuxComponentPeer::toFront(param_5,1);
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      lVar22 = *(long *)(param_6 + 0xe);
      uVar23 = *(undefined8 *)(param_6 + 0x10);
      uVar39 = ModifierKeys::currentModifiers;
      pXVar27 = local_158;
      break;
    case (XWindowSystem)0x4:
      local_168 = (LinuxComponentPeer *)0x3e48000000000000;
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      pXVar27 = *(X11DragState **)(param_6 + 0x10);
      lVar22 = *(long *)(param_6 + 0xe);
      goto joined_r0x002c786c;
    case (XWindowSystem)0x5:
      local_168 = (LinuxComponentPeer *)0xbe48000000000000;
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      pXVar27 = *(X11DragState **)(param_6 + 0x10);
      lVar22 = *(long *)(param_6 + 0xe);
joined_r0x002c786c:
      uStack_160 = uStack_160 & 0xffffffffff000000;
      if (getEventTime(unsigned_long)::eventTimeOffset == 0x12345678) {
        uStack_150 = 0;
        local_158 = pXVar27;
        gettimeofday(&local_138,(__timezone_ptr_t)0x0);
        getEventTime(unsigned_long)::eventTimeOffset =
             (local_138.tv_usec / 1000 + local_138.tv_sec * 1000) - lVar22;
        pXVar27 = local_158;
      }
      auVar61._0_8_ = (double)(int)pXVar27;
      auVar61._8_8_ = (double)(int)((ulong)pXVar27 >> 0x20);
      auVar10._4_4_ = uVar64;
      auVar10._0_4_ = uVar18;
      auVar10._8_4_ = uVar18;
      auVar10._12_4_ = uVar64;
      auVar59 = divpd(auVar61,auVar10);
      ComponentPeer::handleMouseWheel
                (CONCAT44((float)auVar59._8_8_,(float)auVar59._0_8_),(long *)param_5,
                 getEventTime(unsigned_long)::eventTimeOffset + lVar22,(long)&local_168);
      return;
    case (XWindowSystem)0x6:
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers | 0x80;
      LinuxComponentPeer::toFront(param_5,1);
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      lVar22 = *(long *)(param_6 + 0xe);
      uVar23 = *(undefined8 *)(param_6 + 0x10);
      uVar39 = ModifierKeys::currentModifiers;
      pXVar27 = local_158;
      break;
    case (XWindowSystem)0x7:
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers | 0x100;
      LinuxComponentPeer::toFront(param_5,1);
      uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
      uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
      lVar22 = *(long *)(param_6 + 0xe);
      uVar23 = *(undefined8 *)(param_6 + 0x10);
      uVar39 = ModifierKeys::currentModifiers;
      pXVar27 = local_158;
      break;
    default:
      goto switchD_002c4d02_caseD_10;
    }
    local_158 = (X11DragState *)uVar23;
    pXVar56 = local_158;
    ModifierKeys::currentModifiers = uVar39;
    if (getEventTime(unsigned_long)::eventTimeOffset == 0x12345678) {
      uStack_150 = 0;
      gettimeofday(&local_138,(__timezone_ptr_t)0x0);
      getEventTime(unsigned_long)::eventTimeOffset =
           (local_138.tv_usec / 1000 + local_138.tv_sec * 1000) - lVar22;
      pXVar56 = local_158;
      pXVar27 = local_158;
    }
    local_158 = pXVar27;
    auVar62._0_8_ = (double)(int)pXVar56;
    auVar62._8_8_ = (double)(int)((ulong)pXVar56 >> 0x20);
    auVar9._4_4_ = uVar64;
    auVar9._0_4_ = uVar18;
    auVar9._8_4_ = uVar18;
    auVar9._12_4_ = uVar64;
    auVar59 = divpd(auVar62,auVar9);
    fVar54 = (float)auVar59._0_8_;
    goto LAB_002c79ee;
  case 5:
    uVar51 = param_6[0x14];
    uVar20 = uVar51 >> 1 & 2;
    uVar39 = uVar20 + 4;
    if ((Keys::AltMask & uVar51) == 0) {
      uVar39 = uVar20;
    }
    ModifierKeys::currentModifiers = ModifierKeys::currentModifiers & 0x1f0 | uVar39 + (uVar51 & 1);
    Keys::numLock = (Keys::NumLockMask & uVar51) != 0;
    Keys::capsLock = (byte)uVar51 >> 1 & 1;
    if (*(long *)(param_5 + 0x128) != 0) {
      LinuxComponentPeer::updateWindowBounds(param_5);
    }
    if (((param_6[0x15] - 1U < 9) &&
        (bVar15 = (char)this[(ulong)(param_6[0x15] - 1U) + 0x194] - 1, bVar15 < 7)) &&
       ((0x67U >> (bVar15 & 0x1f) & 1) != 0)) {
      ModifierKeys::currentModifiers =
           ModifierKeys::currentModifiers & *(uint *)(&DAT_005eaa10 + (long)(char)bVar15 * 4);
    }
    pXVar27 = (X11DragState *)
              std::__detail::
              _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
              ::operator[]((ulong *)&local_168);
    if (pXVar27[0x1d] != (X11DragState)0x0) {
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar4 = *(code **)(lVar22 + 0x350);
                    /* try { // try from 002c5d55 to 002c5d60 has its CatchHandler @ 002c86c3 */
      pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           singletonHolder);
      (*pcVar4)(*(undefined8 *)(pXVar25 + 0x148),0);
      if (pXVar27[0x1f] == (X11DragState)0x0) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        lStack_f0 = 0;
        local_108 = 0;
        lStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        local_138.tv_sec = 0;
        local_138.tv_usec = 0;
                    /* try { // try from 002c69dd to 002c69e8 has its CatchHandler @ 002c85ec */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uStack_110 = *(undefined8 *)(pXVar25 + 0x80);
        X11DragState::sendExternalDragAndDropMessage(pXVar27,(undefined4 *)&local_138);
        X11DragState::externalResetDragAndDrop(pXVar27);
      }
      else {
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        lStack_f0 = 0;
        local_108 = 0;
        lStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        local_138.tv_sec = 0;
        local_138.tv_usec = 0;
                    /* try { // try from 002c5da0 to 002c5dab has its CatchHandler @ 002c8658 */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uStack_110 = *(undefined8 *)(pXVar25 + 0x98);
        lStack_f0 = 0;
        X11DragState::sendExternalDragAndDropMessage(pXVar27,(undefined4 *)&local_138);
      }
    }
    uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
    uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
    lVar22 = *(long *)(param_6 + 0xe);
    uVar23 = *(undefined8 *)(param_6 + 0x10);
    uVar51 = ModifierKeys::currentModifiers;
    pXVar27 = local_158;
    goto joined_r0x002c7c8c;
  case 6:
    uVar51 = param_6[0x14];
    uVar20 = uVar51 >> 1 & 2;
    uVar39 = uVar20 + 4;
    if ((Keys::AltMask & uVar51) == 0) {
      uVar39 = uVar20;
    }
    uVar39 = uVar39 + (uVar51 & 1);
    ModifierKeys::currentModifiers = ModifierKeys::currentModifiers & 0x1f0 | uVar39;
    Keys::numLock = (Keys::NumLockMask & uVar51) != 0;
    Keys::capsLock = (byte)uVar51 >> 1 & 1;
    if (Keys::modifierKeysAreStale == '\x01') {
      pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           singletonHolder);
      getNativeRealtimeModifiers(pXVar25);
      ModifierKeys::currentModifiers = ModifierKeys::currentModifiers & 0x1f0 | uVar39;
      Keys::modifierKeysAreStale = '\0';
    }
    pXVar27 = (X11DragState *)
              std::__detail::
              _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
              ::operator[]((ulong *)&local_168);
    if (pXVar27[0x1d] == (X11DragState)0x0) goto LAB_002c7c5d;
                    /* try { // try from 002c564c to 002c5657 has its CatchHandler @ 002c86cb */
    pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         singletonHolder);
    uVar23 = *(undefined8 *)(pXVar25 + 0x148);
    lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar4 = *(code **)(lVar22 + 0x2a8);
    lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar22 + 0xb0))(uVar23);
    lVar22 = (*pcVar4)(uVar23);
    lVar22 = X11DragState::externalFindDragTargetWindow(lVar22);
    if (*(long *)(pXVar27 + 8) == lVar22) {
LAB_002c7b03:
      if (pXVar27[0x1e] == (X11DragState)0x0) {
        local_108 = 0;
        lStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        local_138.tv_sec = 0;
        local_138.tv_usec = 0;
                    /* try { // try from 002c7b28 to 002c7b33 has its CatchHandler @ 002c85cc */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uStack_110 = *(undefined8 *)(pXVar25 + 0x88);
        if (Desktop::instance == (Desktop *)0x0) {
          pDVar33 = operator_new(0x1d0);
                    /* try { // try from 002c7b5c to 002c7b63 has its CatchHandler @ 002c84fc */
          Desktop::Desktop(pDVar33);
          Desktop::instance = pDVar33;
        }
        uVar23 = detail::MouseInputSourceImpl::getScreenPosition
                           ((MouseInputSourceImpl *)
                            **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28));
        dVar55 = (double)(float)uVar23 + DAT_005d9098;
        dVar57 = (double)(float)((ulong)uVar23 >> 0x20) + DAT_005d9098;
        iVar19 = SUB84(dVar55,0);
        param_3 = DAT_005d9098;
        if (*(int *)(pXVar27 + 0x70) <= iVar19) {
          iVar21 = SUB84(dVar57,0);
          if (((*(int *)(pXVar27 + 0x74) <= iVar21) &&
              (iVar19 < *(int *)(pXVar27 + 0x70) + *(int *)(pXVar27 + 0x78))) &&
             (iVar21 < *(int *)(pXVar27 + 0x74) + *(int *)(pXVar27 + 0x7c))) goto LAB_002c7c5d;
        }
        if (Desktop::instance == (Desktop *)0x0) {
          pDVar33 = operator_new(0x1d0);
                    /* try { // try from 002c7be0 to 002c7be7 has its CatchHandler @ 002c84fa */
          Desktop::Desktop(pDVar33);
          Desktop::instance = pDVar33;
        }
        uVar23 = Displays::logicalToPhysical<int>
                           (*(long **)(Desktop::instance + 0xe0),
                            (ulong)dVar55 & 0xffffffff | (long)dVar57 << 0x20);
        local_f8 = 0;
        lStack_f0 = (long)(int)((int)uVar23 << 0x10 | (uint)((ulong)uVar23 >> 0x20));
        local_e8 = 0;
        uStack_e0 = *(long *)(pXVar25 + 200);
        XVar17 = (X11DragState)
                 X11DragState::sendExternalDragAndDropMessage(pXVar27,(undefined4 *)&local_138);
        pXVar27[0x1e] = XVar17;
      }
    }
    else {
      if (*(long *)(pXVar27 + 8) != 0) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        lStack_f0 = 0;
        local_108 = 0;
        lStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        local_138.tv_sec = 0;
        local_138.tv_usec = 0;
                    /* try { // try from 002c56c7 to 002c56d2 has its CatchHandler @ 002c85e4 */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uStack_110 = *(undefined8 *)(pXVar25 + 0x80);
        X11DragState::sendExternalDragAndDropMessage(pXVar27,(undefined4 *)&local_138);
      }
      pXVar27[0x1f] = (X11DragState)0x0;
      *(undefined8 *)(pXVar27 + 0x70) = 0;
      *(undefined8 *)(pXVar27 + 0x78) = 0;
      if (lVar22 != 0) {
                    /* try { // try from 002c5702 to 002c570d has its CatchHandler @ 002c85dc */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uVar23 = *(undefined8 *)(pXVar25 + 0x148);
                    /* try { // try from 002c5715 to 002c5720 has its CatchHandler @ 002c85d4 */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uVar2 = *(undefined8 *)(pXVar25 + 0x70);
        local_138.tv_sec = local_138.tv_sec & 0xffffffffffffff00;
        local_138.tv_usec = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        iVar19 = (**(code **)(lVar24 + 0x1b8))
                           (uVar23,lVar22,uVar2,0,2,0,0,&local_118,&uStack_110,&uStack_128,
                            &lStack_120,&local_138.tv_usec);
        local_138.tv_sec =
             CONCAT71(local_138.tv_sec._1_7_,(byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0
                     );
        if (((!((byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0)) ||
            ((int)uStack_110 != 0x20)) || (uStack_128 != 1)) {
          uVar51 = 0xffffffff;
          if ((byte *)local_138.tv_usec == (byte *)0x0) {
            *(undefined4 *)(pXVar27 + 0x18) = 0xffffffff;
            goto LAB_002c7c5d;
          }
        }
        else {
          uVar51 = 3;
          if (*(byte *)local_138.tv_usec < 3) {
            uVar51 = (uint)*(byte *)local_138.tv_usec;
          }
        }
                    /* try { // try from 002c6cb5 to 002c6cc4 has its CatchHandler @ 002c85f9 */
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x128))(local_138.tv_usec);
        *(uint *)(pXVar27 + 0x18) = uVar51;
        if (uVar51 != 0xffffffff) {
          *(long *)(pXVar27 + 8) = lVar22;
          local_f8 = 0;
          lStack_f0 = 0;
          local_108 = 0;
          lStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          lStack_120 = 0;
          local_138.tv_sec = 0;
          local_138.tv_usec = 0;
          local_e8 = 0;
                    /* try { // try from 002c6d04 to 002c6d0f has its CatchHandler @ 002c85a5 */
          pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                              ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                               singletonHolder);
          uStack_110 = *(undefined8 *)(pXVar25 + 0x78);
          local_f8 = (long)(*(int *)(pXVar27 + 0x18) << 0x18);
          uVar51 = *(uint *)(pXVar27 + 0x3c);
          if (uVar51 == 0) {
            lStack_f0 = 0;
LAB_002c7ae0:
            local_e8 = 0;
LAB_002c7aec:
            uStack_e0 = 0;
          }
          else {
            plVar29 = *(long **)(pXVar27 + 0x30);
            lStack_f0 = *plVar29;
            if (uVar51 == 1) goto LAB_002c7ae0;
            local_e8 = plVar29[1];
            if (uVar51 < 3) goto LAB_002c7aec;
            uStack_e0 = plVar29[2];
          }
          X11DragState::sendExternalDragAndDropMessage(pXVar27,(undefined4 *)&local_138);
          goto LAB_002c7b03;
        }
      }
    }
LAB_002c7c5d:
    uVar18 = (undefined4)*(undefined8 *)(param_5 + 0x158);
    uVar64 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x158) >> 0x20);
    lVar22 = *(long *)(param_6 + 0xe);
    uVar23 = *(undefined8 *)(param_6 + 0x10);
    uVar51 = ModifierKeys::currentModifiers;
    pXVar27 = local_158;
joined_r0x002c7c8c:
    local_158 = (X11DragState *)uVar23;
    pXVar56 = local_158;
    ModifierKeys::currentModifiers = uVar51;
    if (getEventTime(unsigned_long)::eventTimeOffset == 0x12345678) {
      uStack_150 = 0;
      gettimeofday(&local_138,(__timezone_ptr_t)0x0);
      getEventTime(unsigned_long)::eventTimeOffset =
           (local_138.tv_usec / 1000 + local_138.tv_sec * 1000) - lVar22;
      pXVar56 = local_158;
      pXVar27 = local_158;
    }
    local_158 = pXVar27;
    auVar63._0_8_ = (double)(int)pXVar56;
    auVar63._8_8_ = (double)(int)((ulong)pXVar56 >> 0x20);
    auVar8._4_4_ = uVar64;
    auVar8._0_4_ = uVar18;
    auVar8._8_4_ = uVar18;
    auVar8._12_4_ = uVar64;
    auVar59 = divpd(auVar63,auVar8);
    ComponentPeer::handleMouseEvent
              ((float)auVar59._0_8_,CONCAT44(uVar64,uVar18),param_3,(long *)param_5,uVar51,
               getEventTime(unsigned_long)::eventTimeOffset + lVar22);
    break;
  case 7:
    if (*(long *)(param_5 + 0x128) != 0) {
      LinuxComponentPeer::updateWindowBounds(param_5);
    }
    if ((ModifierKeys::currentModifiers & 0x1f0) != 0) {
      return;
    }
    uVar51 = param_6[0x18];
    uVar20 = uVar51 >> 1 & 2;
    uVar39 = uVar20 + 4;
    if ((Keys::AltMask & uVar51) == 0) {
      uVar39 = uVar20;
    }
    uVar39 = uVar39 + (uVar51 & 1);
    uVar20 = Keys::NumLockMask & uVar51;
    bVar15 = (byte)uVar51;
    auVar60._0_8_ = (double)(int)*(undefined8 *)(param_6 + 0x10);
    auVar60._8_8_ = (double)(int)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
    uVar23 = *(undefined8 *)(param_5 + 0x158);
    uVar18 = (undefined4)uVar23;
    uVar64 = (undefined4)((ulong)uVar23 >> 0x20);
    auVar7._8_4_ = uVar18;
    auVar7._0_8_ = uVar23;
    auVar7._12_4_ = uVar64;
    auVar59 = divpd(auVar60,auVar7);
    dVar55 = auVar59._0_8_;
    lVar22 = *(long *)(param_6 + 0xe);
    goto joined_r0x002c5877;
  case 8:
    if (((ModifierKeys::currentModifiers & 0x1f0) != 0 || param_6[0x14] != 0) &&
       (param_6[0x14] != 2)) {
      return;
    }
    uVar51 = param_6[0x18];
    uVar20 = uVar51 >> 1 & 2;
    uVar39 = uVar20 + 4;
    if ((Keys::AltMask & uVar51) == 0) {
      uVar39 = uVar20;
    }
    uVar39 = uVar39 + (uVar51 & 1) | ModifierKeys::currentModifiers & 0x1f0;
    uVar20 = Keys::NumLockMask & uVar51;
    bVar15 = (byte)uVar51;
    auVar58._0_8_ = (double)(int)*(undefined8 *)(param_6 + 0x10);
    auVar58._8_8_ = (double)(int)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
    uVar23 = *(undefined8 *)(param_5 + 0x158);
    uVar18 = (undefined4)uVar23;
    uVar64 = (undefined4)((ulong)uVar23 >> 0x20);
    auVar59._8_4_ = uVar18;
    auVar59._0_8_ = uVar23;
    auVar59._12_4_ = uVar64;
    auVar59 = divpd(auVar58,auVar59);
    dVar55 = auVar59._0_8_;
    lVar22 = *(long *)(param_6 + 0xe);
joined_r0x002c5877:
    fVar54 = (float)dVar55;
    Keys::capsLock = bVar15 >> 1 & 1;
    Keys::numLock = uVar20 != 0;
    ModifierKeys::currentModifiers = uVar39;
    if (getEventTime(unsigned_long)::eventTimeOffset == 0x12345678) {
      gettimeofday(&local_138,(__timezone_ptr_t)0x0);
      getEventTime(unsigned_long)::eventTimeOffset =
           (local_138.tv_usec / 1000 + local_138.tv_sec * 1000) - lVar22;
    }
LAB_002c79ee:
    ComponentPeer::handleMouseEvent
              (fVar54,CONCAT44(uVar64,uVar18),param_3,(long *)param_5,uVar39,
               getEventTime(unsigned_long)::eventTimeOffset + lVar22);
    return;
  case 9:
    LinuxComponentPeer::isActiveApplication = 1;
    uVar18 = isFocused(this,*(long *)(param_5 + 0x120));
    if (((char)uVar18 != '\0') && (param_5[200] == (LinuxComponentPeer)0x0)) {
      param_5[200] = (LinuxComponentPeer)0x1;
      ComponentPeer::handleFocusGain((ComponentPeer *)param_5);
      return;
    }
    break;
  case 10:
    uVar18 = isFocused(this,*(long *)(param_5 + 0x120));
    if (((char)uVar18 == '\0') && (param_5[200] != (LinuxComponentPeer)0x0)) {
      param_5[200] = (LinuxComponentPeer)0x0;
      LinuxComponentPeer::isActiveApplication = 0;
      ComponentPeer::handleFocusLoss((ComponentPeer *)param_5);
      return;
    }
    break;
  default:
    cVar16 = XSHMHelpers::isShmAvailable(*(long *)(this + 0x148));
    if (cVar16 != '\0') {
      if ((singletonHolder._40_8_ != 0) &&
         (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x210))(lVar22);
      }
      if (*param_6 == *(int *)(this + 400)) {
                    /* try { // try from 002c6142 to 002c6164 has its CatchHandler @ 002c867d */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        removePendingPaintForWindow(pXVar25,*(ulong *)(local_38 + 0x120));
      }
      XWindowSystemUtilities::ScopedXLock::~ScopedXLock();
      return;
    }
    break;
  case 0xc:
    if ((singletonHolder._40_8_ != 0) &&
       (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar24 + 0x210))(lVar22);
    }
    iVar19 = *(int *)(param_5 + 0x16c);
    if ((long)iVar19 != 0) {
      lVar22 = *(long *)(param_5 + 0x160);
      lVar24 = 0;
      do {
                    /* try { // try from 002c4d87 to 002c4d8e has its CatchHandler @ 002c8888 */
        (**(code **)(**(long **)(lVar22 + lVar24) + 0x168))(*(long **)(lVar22 + lVar24),0);
        lVar24 = lVar24 + 8;
      } while ((long)iVar19 * 8 != lVar24);
    }
    lVar22 = *(long *)(param_5 + 0x120);
    if (*(long *)(param_6 + 8) != lVar22) {
                    /* try { // try from 002c4daf to 002c4dea has its CatchHandler @ 002c8743 */
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar24 + 0x340))
                (*(undefined8 *)(this + 0x148),*(undefined8 *)(param_6 + 8),lVar22,param_6[10],
                 param_6[0xb],param_6 + 10,param_6 + 0xb,&local_168);
    }
    local_158 = *(X11DragState **)(param_5 + 0x158);
    local_58 = (double)param_6[10] / (double)local_158;
    local_50 = (double)param_6[0xb] / (double)local_158;
    local_140 = (LinuxComponentPeer *)(double)param_6[0xd];
    iVar19 = -0x80000000;
    iVar21 = -0x80000000;
    dVar55 = (double)param_6[0xc];
    if (DAT_005de630 < local_58) {
      local_60 = (double)param_6[0xc];
      dVar55 = floor(local_58);
      iVar21 = (int)dVar55;
      dVar55 = local_60;
    }
    dVar57 = dVar55 / (double)local_158;
    if (DAT_005de630 < local_50) {
      local_60 = dVar55 / (double)local_158;
      dVar55 = floor(local_50);
      iVar19 = (int)dVar55;
      dVar57 = local_60;
    }
    iVar42 = 0x7fffffff;
    iVar44 = 0x7fffffff;
    pLVar43 = (LinuxComponentPeer *)((double)local_140 / (double)local_158);
    if (local_58 + dVar57 < DAT_0065a018) {
      local_140 = (LinuxComponentPeer *)((double)local_140 / (double)local_158);
      dVar55 = ceil(local_58 + dVar57);
      iVar44 = (int)dVar55;
      pLVar43 = local_140;
    }
    if (local_50 + (double)pLVar43 < DAT_0065a018) {
      dVar55 = ceil(local_50 + (double)pLVar43);
      iVar42 = (int)dVar55;
    }
    uStack_160 = CONCAT44(iVar42 - iVar19,iVar44 - iVar21);
    local_168 = (LinuxComponentPeer *)CONCAT44(iVar19,iVar21);
    LinuxComponentPeer::repaint(param_5,(int *)&local_168);
    while( true ) {
                    /* try { // try from 002c4f9f to 002c5006 has its CatchHandler @ 002c88b4 */
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar19 = (**(code **)(lVar22 + 0x110))(*(undefined8 *)(this + 0x148),2);
      if (iVar19 < 1) break;
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar22 + 0x248))(*(undefined8 *)(this + 0x148),&local_138);
      if (((int)local_138.tv_sec != 0xc) || (local_118 != *(long *)(param_6 + 8))) break;
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar22 + 0x238))(*(undefined8 *)(this + 0x148),&local_138);
      local_58 = (double)(int)uStack_110 / (double)local_158;
      local_140 = (LinuxComponentPeer *)(double)uStack_110._4_4_;
      local_60 = (double)(int)local_108;
      local_50 = (double)local_108._4_4_;
      iVar19 = -0x80000000;
      iVar21 = -0x80000000;
      if (DAT_005de630 < local_58) {
        dVar55 = floor(local_58);
        iVar21 = (int)dVar55;
      }
      local_140 = (LinuxComponentPeer *)((double)local_140 / (double)local_158);
      if (DAT_005de630 < (double)local_140) {
        dVar55 = floor((double)local_140);
        iVar19 = (int)dVar55;
      }
      dVar55 = local_58 + local_60 / (double)local_158;
      iVar42 = 0x7fffffff;
      iVar44 = 0x7fffffff;
      if (dVar55 < DAT_0065a018) {
        dVar55 = ceil(dVar55);
        iVar44 = (int)dVar55;
      }
      dVar55 = (double)local_140 + local_50 / (double)local_158;
      if (dVar55 < DAT_0065a018) {
        dVar55 = ceil(dVar55);
        iVar42 = (int)dVar55;
      }
      uStack_160 = CONCAT44(iVar42 - iVar19,iVar44 - iVar21);
      local_168 = (LinuxComponentPeer *)CONCAT44(iVar19,iVar21);
      LinuxComponentPeer::repaint(param_5,(int *)&local_168);
    }
    if (singletonHolder._40_8_ != 0) {
      lVar22 = *(long *)(singletonHolder._40_8_ + 0x148);
      if (lVar22 != 0) {
                    /* try { // try from 002c619b to 002c61a8 has its CatchHandler @ 002c86eb */
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x360))(lVar22);
      }
    }
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1a:
    break;
  case 0x13:
    Component::internalBroughtToFront(*(Component **)(param_5 + 8));
    return;
  case 0x15:
  case 0x18:
    LinuxComponentPeer::updateWindowBounds(param_5);
    LinuxComponentPeer::updateBorderSize(param_5);
    ComponentPeer::handleMovedOrResized((ComponentPeer *)param_5);
    return;
  case 0x16:
    LVar1 = param_5[0xc9];
    param_5[0xc9] = (LinuxComponentPeer)0x1;
                    /* try { // try from 002c5eff to 002c5f25 has its CatchHandler @ 002c87a8 */
    LinuxComponentPeer::updateWindowBounds(param_5);
    LinuxComponentPeer::updateBorderSize(param_5);
    ComponentPeer::handleMovedOrResized((ComponentPeer *)param_5);
    if (((byte)param_5[0x10] & 8) != 0) {
      dismissBlockingModals(*(long **)(param_5 + 8));
    }
    lVar22 = *(long *)(param_5 + 0x120);
    if ((*(long *)(param_6 + 10) == lVar22) && (*(long *)(param_6 + 0x12) != 0)) {
      local_138.tv_sec = 0;
      local_3c = 0;
      if ((singletonHolder._40_8_ != 0) &&
         (lVar24 = *(long *)(singletonHolder._40_8_ + 0x148), lVar24 != 0)) {
                    /* try { // try from 002c5f73 to 002c5f80 has its CatchHandler @ 002c86d3 */
        lVar50 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar50 + 0x210))(lVar24);
      }
                    /* try { // try from 002c5f81 to 002c5fac has its CatchHandler @ 002c875a */
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pcVar4 = *(code **)(lVar24 + 0x2a8);
      uVar23 = *(undefined8 *)(this + 0x148);
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar18 = (**(code **)(lVar24 + 0xb0))(*(undefined8 *)(this + 0x148));
      pbVar37 = (byte *)(*pcVar4)(uVar23,uVar18);
      local_78 = pbVar37;
                    /* try { // try from 002c5fb8 to 002c5fe6 has its CatchHandler @ 002c8703 */
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar19 = (**(code **)(lVar24 + 0x280))
                         (*(undefined8 *)(this + 0x148),pbVar37,&local_78,&local_168,&local_138,
                          &local_3c);
      _Var12 = local_138.tv_sec;
      local_48 = (byte *)local_138.tv_sec;
      if ((iVar19 != 0) && (uVar41 = (ulong)local_3c, 0 < (int)local_3c)) {
        while( true ) {
                    /* try { // try from 002c602c to 002c6030 has its CatchHandler @ 002c87b7 */
          lVar24 = getPeerFor(*(long *)(local_138.tv_sec + (ulong)((int)uVar41 - 1) * 8));
          if ((lVar24 != 0) &&
             (lVar24 = __dynamic_cast(lVar24,&ComponentPeer::typeinfo,&LinuxComponentPeer::typeinfo,
                                      0), lVar24 != 0)) {
                    /* try { // try from 002c7597 to 002c75a0 has its CatchHandler @ 002c851f */
            lVar22 = getPeerFor(lVar22);
            if (lVar22 == 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = __dynamic_cast(lVar22,&ComponentPeer::typeinfo,&LinuxComponentPeer::typeinfo,
                                      0);
            }
            bVar53 = lVar22 == lVar24;
            goto joined_r0x002c7dbc;
          }
          if (uVar41 < 2) break;
          uVar41 = uVar41 - 1;
        }
      }
      bVar53 = false;
joined_r0x002c7dbc:
      if ((byte *)_Var12 != (byte *)0x0) {
                    /* try { // try from 002c629d to 002c62aa has its CatchHandler @ 002c86bb */
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar22 + 0x128))(_Var12);
      }
      if ((singletonHolder._40_8_ != 0) &&
         (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
                    /* try { // try from 002c62c3 to 002c62d0 has its CatchHandler @ 002c8650 */
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x360))(lVar22);
      }
      if (bVar53) {
                    /* try { // try from 002c62df to 002c62e3 has its CatchHandler @ 002c86d3 */
        Component::internalBroughtToFront(*(Component **)(param_5 + 8));
      }
    }
    param_5[0xc9] = LVar1;
    break;
  case 0x1c:
    lVar22 = *(long *)(param_6 + 10);
    if (lVar22 == *(long *)(this + 0x38)) {
      uVar23 = *(undefined8 *)(param_6 + 8);
      if ((singletonHolder._40_8_ != 0) &&
         (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x210))(lVar22);
      }
      uVar2 = *(undefined8 *)(this + 0x38);
      uVar3 = *(undefined8 *)(this + 0x148);
      local_138.tv_sec = local_138.tv_sec & 0xffffffffffffff00;
      local_138.tv_usec = 0;
      uStack_128 = 0;
      lStack_120 = 0;
      uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
                    /* try { // try from 002c51a1 to 002c51eb has its CatchHandler @ 002c8705 */
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar19 = (**(code **)(lVar22 + 0x1b8))
                         (uVar3,uVar23,uVar2,0,0x40,0,uVar2,&local_118,&uStack_110,&uStack_128,
                          &lStack_120,&local_138.tv_usec);
      local_138.tv_sec =
           CONCAT71(local_138.tv_sec._1_7_,(byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0);
      if ((byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0) {
        bVar53 = false;
        if (((local_118 == *(long *)(this + 0x38)) && ((int)uStack_110 == 0x20)) &&
           (uStack_128 != 0)) {
          bVar53 = *(long *)local_138.tv_usec == 3;
        }
LAB_002c68f9:
                    /* try { // try from 002c68f9 to 002c6908 has its CatchHandler @ 002c86f3 */
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar22 + 0x128))(local_138.tv_usec);
      }
      else {
        bVar53 = false;
        if ((byte *)local_138.tv_usec != (byte *)0x0) goto LAB_002c68f9;
      }
      if ((singletonHolder._40_8_ != 0) &&
         (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
                    /* try { // try from 002c6921 to 002c692e has its CatchHandler @ 002c8648 */
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x360))(lVar22);
      }
      if (!bVar53) {
        lVar22 = *(long *)(param_6 + 10);
        goto LAB_002c693c;
      }
LAB_002c6957:
      dismissBlockingModals(*(long **)(param_5 + 8));
    }
    else {
LAB_002c693c:
      if ((lVar22 == *(long *)(this + 0x60)) &&
         (uVar41 = isHidden(this,*(undefined8 *)(param_6 + 8)), (char)uVar41 != '\0'))
      goto LAB_002c6957;
    }
    lVar22 = *(long *)(param_6 + 10);
    uVar23 = *(undefined8 *)(this + 0x148);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    lVar24 = (**(code **)(lVar24 + 0x1f0))(uVar23,"_NET_FRAME_EXTENTS",1);
    if (lVar22 == lVar24) {
      LinuxComponentPeer::updateBorderSize(param_5);
      return;
    }
    break;
  case 0x1d:
    pXVar27 = (X11DragState *)
              std::__detail::
              _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
              ::operator[]((ulong *)&local_38);
    if (pXVar27[0x1d] != (X11DragState)0x0) {
      X11DragState::externalResetDragAndDrop(pXVar27);
      return;
    }
    break;
  case 0x1e:
    plVar29 = std::__detail::
              _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
              ::operator[]((ulong *)&local_38);
    lVar22 = *(long *)(param_6 + 0xe);
    local_138.tv_sec = CONCAT44(local_138.tv_sec._4_4_,0x1f);
    local_118 = *(long *)(param_6 + 10);
    uStack_110 = *(undefined8 *)(param_6 + 0xc);
    lStack_100 = 0;
    local_f8 = *(long *)(param_6 + 0x12);
    local_108 = lVar22;
                    /* try { // try from 002c60b0 to 002c60bb has its CatchHandler @ 002c86fb */
    pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         singletonHolder);
    uVar23 = *(undefined8 *)(pXVar25 + 0x148);
    if ((long)*(int *)((long)plVar29 + 0x3c) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(plVar29[6] + lVar24) == lVar22) {
          lStack_100 = *(long *)(param_6 + 0x10);
          lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          lVar50 = 0;
          pbVar37 = (byte *)plVar29[0x10];
          goto LAB_002c63a3;
        }
        lVar24 = lVar24 + 8;
      } while ((long)*(int *)((long)plVar29 + 0x3c) * 8 != lVar24);
    }
    goto LAB_002c64e4;
  case 0x1f:
    pXVar27 = (X11DragState *)
              std::__detail::
              _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
              ::operator[]((ulong *)&local_38);
    this_00 = (StringArray *)(pXVar27 + 0x50);
    if (0 < *(int *)(pXVar27 + 0x5c)) {
      lVar22 = 0;
      do {
        piVar47 = (int *)(*(long *)(*(long *)this_00 + lVar22 * 8) + -0x10);
        if (piVar47 != &emptyString) {
          LOCK();
          iVar19 = *piVar47;
          *piVar47 = *piVar47 + -1;
          UNLOCK();
          if (iVar19 == 0) {
            operator_delete__(piVar47);
          }
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < *(int *)(pXVar27 + 0x5c));
    }
    *(undefined4 *)(pXVar27 + 0x5c) = 0;
    if (*(int *)(pXVar27 + 0x58) != 0) {
      free(*(void **)this_00);
      *(undefined8 *)this_00 = 0;
    }
    *(undefined4 *)(pXVar27 + 0x58) = 0;
    piVar47 = (int *)(*(long *)(pXVar27 + 0x60) + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar19 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar19 == 0) {
        operator_delete__(piVar47);
      }
    }
    *(undefined1 **)(pXVar27 + 0x60) = &DAT_0061ac58;
    if (*(long *)(param_6 + 0xe) != 0) {
      local_140 = (LinuxComponentPeer *)&DAT_0061ac58;
      local_168 = (LinuxComponentPeer *)0x0;
      uStack_160 = 0;
      local_78 = (byte *)0x0;
      uStack_70 = 0;
      local_158 = pXVar27;
      do {
                    /* try { // try from 002c53c8 to 002c53cf has its CatchHandler @ 002c8880 */
        pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        uVar41 = uStack_70;
        uVar23 = *(undefined8 *)(pXVar25 + 0x148);
        uVar2 = *(undefined8 *)(param_6 + 8);
        uVar3 = *(undefined8 *)(param_6 + 0xe);
        local_138.tv_sec = local_138.tv_sec & 0xffffffffffffff00;
        local_138.tv_usec = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
                    /* try { // try from 002c540a to 002c5456 has its CatchHandler @ 002c8892 */
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        uVar48 = 0;
        iVar19 = (**(code **)(lVar22 + 0x1b8))
                           (uVar23,uVar2,uVar3,uVar41 >> 2,0x10000,0,0,&local_118,&uStack_110,
                            &uStack_128,&lStack_120,&local_138.tv_usec);
        bVar53 = true;
        local_138.tv_sec =
             CONCAT71(local_138.tv_sec._1_7_,(byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0
                     );
        if ((byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0) {
          iVar19 = (int)uStack_110 + 7;
          if (-1 < (int)uStack_110) {
            iVar19 = (int)uStack_110;
          }
                    /* try { // try from 002c548c to 002c5498 has its CatchHandler @ 002c8848 */
          MemoryBlock::append((MemoryBlock *)&local_78,(void *)local_138.tv_usec,
                              (long)(iVar19 >> 3) * uStack_128);
          bVar53 = lStack_120 == 0;
        }
        if ((byte *)local_138.tv_usec != (byte *)0x0) {
                    /* try { // try from 002c54b5 to 002c54c4 has its CatchHandler @ 002c888a */
          lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar22 + 0x128))(local_138.tv_usec);
        }
        pbVar37 = local_78;
      } while (!bVar53);
      if ((local_78 != (byte *)0x0) && ((int)uStack_70 != 0)) {
        if ((int)uStack_70 < 0) {
                    /* try { // try from 002c6b40 to 002c6b4c has its CatchHandler @ 002c85f4 */
          local_140 = (LinuxComponentPeer *)
                      StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(local_78);
        }
        else if (*local_78 != 0) {
          uVar41 = uStack_70 & 0xffffffff;
          uVar45 = uVar41 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002c61f4 to 002c61f8 has its CatchHandler @ 002c85f4 */
          puVar26 = operator_new__(uVar45 + 0x17);
          LOCK();
          *puVar26 = 0;
          UNLOCK();
          *(ulong *)(puVar26 + 2) = uVar45;
          local_140 = (LinuxComponentPeer *)(puVar26 + 4);
          memcpy(local_140,pbVar37,uVar41);
          *(undefined1 *)((long)puVar26 + uVar41 + 0x10) = 0;
        }
      }
                    /* try { // try from 002c6b54 to 002c6b65 has its CatchHandler @ 002c868a */
      pLVar43 = local_140;
      StringArray::addLines((StringArray *)&local_168,(byte *)local_140);
      pLVar43 = pLVar43 + -0x10;
      if (pLVar43 != (LinuxComponentPeer *)&emptyString) {
        LOCK();
        iVar19 = *(int *)pLVar43;
        *(int *)pLVar43 = *(int *)pLVar43 + -1;
        UNLOCK();
        if (iVar19 == 0) {
          operator_delete__(pLVar43);
        }
      }
      free(local_78);
                    /* try { // try from 002c6b91 to 002c6b9c has its CatchHandler @ 002c8682 */
      pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           singletonHolder);
      lVar22 = *(long *)(local_158 + 0x28);
      if (lVar22 == 0) {
                    /* try { // try from 002c6c66 to 002c6c6f has its CatchHandler @ 002c8748 */
        puVar26 = operator_new__(0x1f);
        LOCK();
        *puVar26 = 0;
        UNLOCK();
        *(undefined8 *)(puVar26 + 2) = 8;
        pbVar37 = (byte *)(puVar26 + 4);
        puVar26[4] = 0x656e6f4e;
        *(undefined1 *)(puVar26 + 5) = 0;
      }
      else {
        uVar23 = *(undefined8 *)(pXVar25 + 0x148);
                    /* try { // try from 002c6bb6 to 002c6bc6 has its CatchHandler @ 002c8748 */
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        pbVar30 = (byte *)(**(code **)(lVar24 + 0x158))(uVar23,lVar22);
        local_138.tv_sec = (__time_t)pbVar30;
        if (pbVar30 == (byte *)0x0) {
          pbVar37 = &DAT_0061ac58;
        }
        else {
          bVar15 = *pbVar30;
          if (bVar15 == 0) {
            pbVar37 = &DAT_0061ac58;
          }
          else {
            lVar22 = 0;
            pbVar37 = pbVar30;
            do {
              pbVar37 = pbVar37 + 1;
              lVar24 = lVar22 + (ulong)(bVar15 >> 7);
              lVar22 = lVar24 + 1;
              bVar15 = *pbVar37;
            } while (bVar15 != 0);
            uVar41 = lVar24 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002c6c0d to 002c6c11 has its CatchHandler @ 002c85ba */
            puVar26 = operator_new__(uVar41 + 0x17);
            LOCK();
            *puVar26 = 0;
            UNLOCK();
            *(ulong *)(puVar26 + 2) = uVar41;
            pbVar37 = (byte *)(puVar26 + 4);
            bVar15 = *pbVar30;
            pbVar31 = pbVar37;
            if (bVar15 != 0) {
              pbVar38 = pbVar30;
              do {
                pbVar38 = pbVar38 + 1;
                if ((char)bVar15 < '\0') {
                  *pbVar31 = bVar15 >> 6 | 0xc0;
                  pbVar31[1] = bVar15 & 0x3f | 0x80;
                  pbVar31 = pbVar31 + 1;
                }
                else {
                  *pbVar31 = bVar15;
                }
                pbVar31 = pbVar31 + 1;
                bVar15 = *pbVar38;
              } while (bVar15 != 0);
            }
            *pbVar31 = 0;
          }
                    /* try { // try from 002c6d7a to 002c6d87 has its CatchHandler @ 002c8670 */
          lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar22 + 0x128))(pbVar30);
        }
      }
      uVar51 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar37,(byte *)"text/uri-list");
      pbVar37 = pbVar37 + -0x10;
      if (pbVar37 != (byte *)&emptyString) {
        LOCK();
        iVar19 = *(int *)pbVar37;
        *(int *)pbVar37 = *(int *)pbVar37 + -1;
        UNLOCK();
        if (iVar19 == 0) {
          operator_delete__(pbVar37);
        }
      }
      if (uVar51 == 0) {
        if ((long)uStack_160._4_4_ != 0) {
          pLVar43 = local_168 + (long)uStack_160._4_4_ * 8;
          pLVar49 = local_168;
          local_140 = pLVar43;
          do {
                    /* try { // try from 002c6e4d to 002c6e64 has its CatchHandler @ 002c8843 */
            juce::String::replace
                      ((String *)&local_138,(long *)pLVar49,&DAT_0065b9f8,&DAT_005e3a10,(byte *)0x0,
                       uVar48);
                    /* try { // try from 002c6e65 to 002c6e88 has its CatchHandler @ 002c881e */
            juce::String::replace
                      ((String *)&local_78,&local_138.tv_sec,(byte *)"file://",&DAT_0061ac58,
                       (byte *)0x1,uVar48);
            pbVar37 = (byte *)(local_138.tv_sec + -0x10);
            if (pbVar37 != (byte *)&emptyString) {
              LOCK();
              iVar19 = *(int *)pbVar37;
              *(int *)pbVar37 = *(int *)pbVar37 + -1;
              UNLOCK();
              if (iVar19 == 0) {
                operator_delete__(pbVar37);
              }
            }
                    /* try { // try from 002c6eb1 to 002c6ec7 has its CatchHandler @ 002c87e8 */
            juce::String::replaceCharacter(&local_138.tv_sec,local_78,0x2b,0x20);
            _Var12 = local_138.tv_sec;
            uVar51 = (uint)*(byte *)local_138.tv_sec;
            if (*(byte *)local_138.tv_sec != 0) {
              pbVar37 = (byte *)local_138.tv_sec;
              uVar39 = uVar51;
LAB_002c6ee0:
              pbVar30 = pbVar37 + 1;
              if ((char)uVar39 < '\0') {
                if ((uVar39 & 0x40) == 0) {
                  uVar39 = uVar39 & 0x7f;
                }
                else {
                  if ((uVar39 & 0x20) == 0) {
                    uVar20 = 0x3f;
                    lVar22 = 0;
                    uVar48 = 0;
                    bVar53 = false;
                  }
                  else {
                    uVar48 = CONCAT71((int7)((ulong)uVar48 >> 8),1);
                    if ((uVar39 & 0x10) == 0) {
                      uVar20 = 0x1f;
                      lVar22 = 1;
                      bVar53 = false;
                    }
                    else {
                      uVar20 = 0xf;
                      lVar22 = 2;
                      bVar53 = true;
                    }
                  }
                  uVar39 = uVar39 & uVar20;
                  if ((pbVar37[1] & 0xffffffc0) == 0x80) {
                    pbVar31 = pbVar37 + lVar22 + 2;
                    uVar39 = pbVar37[1] & 0x3f | uVar39 << 6;
                    pbVar30 = pbVar31;
                    if ((char)uVar48 != '\0') {
                      bVar15 = pbVar37[2];
                      pbVar30 = pbVar37 + 2;
                      if ((bVar15 & 0xc0) == 0x80) {
                        uVar39 = bVar15 & 0x3f | uVar39 << 6;
                        pbVar30 = pbVar31;
                        if (bVar53) {
                          uVar20 = (uint)pbVar37[3];
                          pbVar30 = pbVar37 + 3;
                          if ((uVar20 & 0xffffffc0) == 0x80) {
                            uVar39 = uVar39 << 6 | uVar20 & 0x3f;
                            pbVar30 = pbVar31;
                          }
                        }
                      }
                    }
                  }
                }
              }
              pbVar37 = pbVar30;
              if (uVar39 != 0x25) goto LAB_002c6fa8;
              uVar41 = 0;
              pbVar37 = (byte *)local_138.tv_sec;
              while( true ) {
                pbVar30 = pbVar37 + 1;
                if ((char)uVar51 < '\0') {
                  if ((uVar51 & 0x40) == 0) {
                    uVar51 = uVar51 & 0x7f;
                  }
                  else {
                    if ((uVar51 & 0x20) == 0) {
                      uVar39 = 0x3f;
                      lVar22 = 0;
                      bVar53 = false;
                      bVar11 = false;
                    }
                    else {
                      bVar53 = true;
                      if ((uVar51 & 0x10) == 0) {
                        uVar39 = 0x1f;
                        lVar22 = 1;
                        bVar11 = false;
                      }
                      else {
                        uVar39 = 0xf;
                        lVar22 = 2;
                        bVar11 = true;
                      }
                    }
                    uVar51 = uVar51 & uVar39;
                    if ((pbVar37[1] & 0xffffffc0) == 0x80) {
                      pbVar31 = pbVar37 + lVar22 + 2;
                      uVar51 = pbVar37[1] & 0x3f | uVar51 << 6;
                      pbVar30 = pbVar31;
                      if (bVar53) {
                        bVar15 = pbVar37[2];
                        pbVar30 = pbVar37 + 2;
                        if ((bVar15 & 0xc0) == 0x80) {
                          uVar51 = bVar15 & 0x3f | uVar51 << 6;
                          pbVar30 = pbVar31;
                          if (bVar11) {
                            uVar39 = (uint)pbVar37[3];
                            pbVar30 = pbVar37 + 3;
                            if ((uVar39 & 0xffffffc0) == 0x80) {
                              uVar51 = uVar51 << 6 | uVar39 & 0x3f;
                              pbVar30 = pbVar31;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                pbVar37 = pbVar30;
                if (uVar51 == 0) break;
                lVar22 = 1;
                if ((0x7f < uVar51) && (lVar22 = 2, 0x7ff < uVar51)) {
                  lVar22 = 4 - (ulong)(uVar51 < 0x10000);
                }
                uVar41 = uVar41 + lVar22;
                uVar51 = (uint)*pbVar37;
              }
              if ((int)uVar41 < 1) {
                pbVar37 = (byte *)0x0;
                pbVar30 = &DAT_0061ac58;
              }
              else {
                uVar51 = (int)uVar41 + ((uint)(uVar41 >> 1) & 0x7fffffff) + 8 & 0xfffffff8;
                if ((int)uVar51 < 1) {
                  pbVar37 = (byte *)0x0;
                }
                else {
                  pbVar37 = malloc((ulong)uVar51);
                }
                memcpy(pbVar37,(void *)_Var12,uVar41 & 0xffffffff);
                uVar45 = 1;
                do {
                  if (pbVar37[uVar45 - 1] == 0x25) {
                    iVar19 = (int)uVar41;
                    uVar39 = 0;
                    if (uVar45 < (uVar41 & 0xffffffff)) {
                      bVar15 = pbVar37[uVar45];
                      uVar39 = (uint)bVar15;
                      uVar20 = bVar15 - 0x30;
                      if (9 < uVar20) {
                        if (5 < bVar15 - 0x61) goto LAB_002c71b0;
                        uVar20 = bVar15 - 0x57;
                      }
                    }
                    else {
LAB_002c71b0:
                      uVar20 = uVar39 - 0x37;
                      if (5 < uVar39 - 0x41) {
                        uVar20 = 0xffffffff;
                      }
                    }
                    uVar39 = 0;
                    if (uVar45 + 1 < (uVar41 & 0xffffffff)) {
                      uVar39 = (uint)pbVar37[uVar45 + 1];
                      uVar40 = uVar39 - 0x30;
                      if (9 < uVar40) {
                        if (5 < uVar39 - 0x61) goto LAB_002c71f0;
                        uVar40 = uVar39 - 0x57;
                      }
                    }
                    else {
LAB_002c71f0:
                      uVar40 = uVar39 - 0x37;
                      if (5 < uVar39 - 0x41) {
                        uVar40 = 0xffffffff;
                      }
                    }
                    if (-1 < (int)(uVar40 | uVar20)) {
                      pbVar37[uVar45 - 1] = (char)uVar40 + (char)uVar20 * '\x10';
                      iVar21 = (int)uVar45 + 2;
                      if (iVar19 < iVar21) {
                        iVar21 = iVar19;
                      }
                      iVar42 = iVar19;
                      if ((long)(uVar45 - 1) < (long)iVar19) {
                        iVar42 = (int)uVar45;
                      }
                      uVar39 = iVar21 - iVar42;
                      if (!(uVar39 == 0 || iVar21 < iVar42)) {
                        memmove(pbVar37 + iVar42,pbVar37 + iVar42 + uVar39,(long)(iVar19 - iVar21));
                        uVar39 = iVar19 - uVar39;
                        uVar41 = (ulong)uVar39;
                        iVar19 = uVar39 * 2;
                        if (iVar19 < 0) {
                          iVar19 = 0;
                        }
                        if (iVar19 < (int)uVar51) {
                          uVar20 = 0x40;
                          if (0x40 < (int)uVar39) {
                            uVar20 = uVar39;
                          }
                          if ((int)uVar20 < (int)uVar51) {
                            pbVar37 = realloc(pbVar37,(ulong)uVar20);
                            uVar51 = uVar20;
                          }
                        }
                      }
                    }
                  }
                  iVar19 = (int)uVar41;
                  bVar53 = (long)uVar45 < (long)iVar19;
                  uVar45 = uVar45 + 1;
                } while (bVar53);
                if (pbVar37 == (byte *)0x0) {
                  pbVar30 = &DAT_0061ac58;
                }
                else if (iVar19 == 0) {
LAB_002c7307:
                  pbVar30 = &DAT_0061ac58;
                }
                else if (iVar19 < 0) {
                    /* try { // try from 002c731e to 002c7325 has its CatchHandler @ 002c8601 */
                  pbVar30 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                              (pbVar37);
                }
                else {
                  if (*pbVar37 == 0) goto LAB_002c7307;
                  uVar41 = uVar41 & 0xffffffff;
                  uVar45 = uVar41 + 4 & 0x1fffffffc;
                    /* try { // try from 002c72d9 to 002c72dd has its CatchHandler @ 002c8601 */
                  puVar26 = operator_new__(uVar45 + 0x17);
                  LOCK();
                  *puVar26 = 0;
                  UNLOCK();
                  *(ulong *)(puVar26 + 2) = uVar45;
                  pbVar30 = (byte *)(puVar26 + 4);
                  memcpy(pbVar30,pbVar37,uVar41);
                  *(undefined1 *)((long)puVar26 + uVar41 + 0x10) = 0;
                }
              }
              local_48 = pbVar30;
              free(pbVar37);
              pLVar43 = local_140;
              pbVar37 = (byte *)(local_138.tv_sec + -0x10);
              if (pbVar37 != (byte *)&emptyString) {
                LOCK();
                iVar19 = *(int *)pbVar37;
                *(int *)pbVar37 = *(int *)pbVar37 + -1;
                UNLOCK();
                if (iVar19 == 0) {
                  operator_delete__(pbVar37);
                }
              }
              goto LAB_002c736c;
            }
LAB_002c710e:
            local_48 = (byte *)local_138.tv_sec;
            local_138.tv_sec = (__time_t)&DAT_0061ac58;
LAB_002c736c:
            StringArray::add(this_00,&local_48);
            pbVar37 = local_48 + -0x10;
            if (pbVar37 != (byte *)&emptyString) {
              LOCK();
              iVar19 = *(int *)pbVar37;
              *(int *)pbVar37 = *(int *)pbVar37 + -1;
              UNLOCK();
              if (iVar19 == 0) {
                operator_delete__(pbVar37);
              }
            }
            pbVar37 = local_78 + -0x10;
            if (pbVar37 != (byte *)&emptyString) {
              LOCK();
              iVar19 = *(int *)pbVar37;
              *(int *)pbVar37 = *(int *)pbVar37 + -1;
              UNLOCK();
              if (iVar19 == 0) {
                operator_delete__(pbVar37);
              }
            }
            pLVar49 = pLVar49 + 8;
          } while (pLVar49 != pLVar43);
        }
        if ((long)*(int *)(local_158 + 0x5c) != 0) {
          plVar29 = *(long **)(local_158 + 0x50);
          lVar22 = (long)*(int *)(local_158 + 0x5c) << 3;
          do {
                    /* try { // try from 002c73fd to 002c7407 has its CatchHandler @ 002c87e0 */
            juce::String::trim(&local_138.tv_sec,plVar29);
            pbVar37 = (byte *)*plVar29;
            *plVar29 = local_138.tv_sec;
            pbVar30 = pbVar37 + -0x10;
            local_138.tv_sec = (__time_t)pbVar37;
            if (pbVar30 != (byte *)&emptyString) {
              LOCK();
              iVar19 = *(int *)pbVar30;
              *(int *)pbVar30 = *(int *)pbVar30 + -1;
              UNLOCK();
              if (iVar19 == 0) {
                operator_delete__(pbVar30);
              }
            }
            plVar29 = plVar29 + 1;
            lVar22 = lVar22 + -8;
          } while (lVar22 != 0);
        }
        StringArray::removeEmptyStrings((Array<juce::String,juce::DummyCriticalSection,0> *)this_00)
        ;
      }
      else {
                    /* try { // try from 002c6dbc to 002c6dd1 has its CatchHandler @ 002c8640 */
        StringArray::joinIntoString(&local_138.tv_sec,(long *)&local_168,"\n");
        pbVar37 = *(byte **)(local_158 + 0x60);
        *(__time_t *)(local_158 + 0x60) = local_138.tv_sec;
        pbVar30 = pbVar37 + -0x10;
        local_138.tv_sec = (__time_t)pbVar37;
        if (pbVar30 != (byte *)&emptyString) {
          LOCK();
          iVar19 = *(int *)pbVar30;
          *(int *)pbVar30 = *(int *)pbVar30 + -1;
          UNLOCK();
          if (iVar19 == 0) {
            operator_delete__(pbVar30);
          }
        }
      }
      if (local_158[0x20] != (X11DragState)0x0) {
                    /* try { // try from 002c744a to 002c7453 has its CatchHandler @ 002c8748 */
        X11DragState::handleDragAndDropDataReceived(local_158);
      }
      if (0 < uStack_160._4_4_) {
        lVar22 = 0;
        do {
          piVar47 = (int *)(*(long *)(local_168 + lVar22 * 8) + -0x10);
          if (piVar47 != &emptyString) {
            LOCK();
            iVar19 = *piVar47;
            *piVar47 = *piVar47 + -1;
            UNLOCK();
            if (iVar19 == 0) {
              operator_delete__(piVar47);
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < uStack_160._4_4_);
      }
      free(local_168);
    }
    break;
  case 0x21:
    lVar22 = *(long *)(param_6 + 10);
    if ((lVar22 == *(long *)(this + 0x10)) && (param_6[0xc] == 0x20)) {
      lVar22 = *(long *)(param_6 + 0xe);
      if (lVar22 == *(long *)(this + 0x28)) {
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        pcVar4 = *(code **)(lVar22 + 0x2a8);
        uVar23 = *(undefined8 *)(this + 0x148);
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        uVar18 = (**(code **)(lVar22 + 0xb0))(*(undefined8 *)(this + 0x148));
        uVar23 = (*pcVar4)(uVar23,uVar18);
        *(undefined8 *)(param_6 + 8) = uVar23;
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar22 + 0x2d0))(*(undefined8 *)(this + 0x148),uVar23,0,0,param_6);
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar22 + 0x120))(*(undefined8 *)(this + 0x148));
        return;
      }
      if (lVar22 != *(long *)(this + 0x18)) {
        if (lVar22 == *(long *)(this + 0x20)) {
          (**(code **)(**(long **)(param_5 + 8) + 0x78))();
          return;
        }
        return;
      }
      if (((byte)param_5[0x11] & 4) != 0) {
        return;
      }
      if ((singletonHolder._40_8_ != 0) &&
         (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x210))(lVar22);
      }
      if (*(long *)(param_6 + 8) != 0) {
                    /* try { // try from 002c658f to 002c65ae has its CatchHandler @ 002c8524 */
        lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        iVar19 = (**(code **)(lVar22 + 0x1b0))
                           (*(undefined8 *)(this + 0x148),*(undefined8 *)(param_6 + 8),&local_138);
        if ((iVar19 != 0) && (uStack_e0._4_4_ == 2)) {
          pXVar25 = *(XWindowSystem **)(local_168 + 0x120);
                    /* try { // try from 002c65c9 to 002c6608 has its CatchHandler @ 002c84f5 */
          lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          pcVar4 = *(code **)(lVar22 + 0x2f0);
          uVar23 = *(undefined8 *)(this + 0x148);
          pXVar28 = *(XWindowSystem **)(param_6 + 8);
          if (pXVar28 == pXVar25) {
            pXVar28 = getFocusWindow(pXVar25);
          }
          (*pcVar4)(uVar23,pXVar28,2,*(undefined8 *)(param_6 + 0x10));
        }
      }
      if (singletonHolder._40_8_ == 0) {
        return;
      }
      lVar22 = *(long *)(singletonHolder._40_8_ + 0x148);
      if (lVar22 == 0) {
        return;
      }
                    /* try { // try from 002c6629 to 002c6636 has its CatchHandler @ 002c84ed */
      lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar24 + 0x360))(lVar22);
      return;
    }
    if (lVar22 == *(long *)(this + 0x78)) {
      pXVar27 = (X11DragState *)
                std::__detail::
                _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                ::operator[]((ulong *)&local_168);
      if (0 < *(int *)(pXVar27 + 0x5c)) {
        lVar22 = 0;
        do {
          piVar47 = (int *)(*(long *)(*(long *)(pXVar27 + 0x50) + lVar22 * 8) + -0x10);
          if (piVar47 != &emptyString) {
            LOCK();
            iVar19 = *piVar47;
            *piVar47 = *piVar47 + -1;
            UNLOCK();
            if (iVar19 == 0) {
              operator_delete__(piVar47);
            }
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < *(int *)(pXVar27 + 0x5c));
      }
      *(undefined4 *)(pXVar27 + 0x5c) = 0;
      if (*(int *)(pXVar27 + 0x58) != 0) {
        free(*(void **)(pXVar27 + 0x50));
        *(long *)(pXVar27 + 0x50) = 0;
      }
      *(undefined4 *)(pXVar27 + 0x58) = 0;
      piVar47 = (int *)(*(long *)(pXVar27 + 0x60) + -0x10);
      if (piVar47 != &emptyString) {
        LOCK();
        iVar19 = *piVar47;
        *piVar47 = *piVar47 + -1;
        UNLOCK();
        if (iVar19 == 0) {
          operator_delete__(piVar47);
        }
      }
      *(undefined1 **)(pXVar27 + 0x60) = &DAT_0061ac58;
      *(undefined4 *)(pXVar27 + 0x4c) = 0;
      if (*(int *)(pXVar27 + 0x48) != 0) {
        free(*(void **)(pXVar27 + 0x40));
        *(long *)(pXVar27 + 0x40) = 0;
      }
      *(undefined4 *)(pXVar27 + 0x48) = 0;
      *(long *)(pXVar27 + 0x28) = 0;
      if (*(char *)((long)param_6 + 0x43) != '\x03') {
LAB_002c82b6:
        *(long *)(pXVar27 + 0x10) = 0;
        return;
      }
                    /* try { // try from 002c67ca to 002c67d5 has its CatchHandler @ 002c85b2 */
      pXVar25 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           singletonHolder);
      *(long *)(pXVar27 + 0x10) = *(long *)(param_6 + 0xe);
      if ((*(byte *)(param_6 + 0x10) & 1) != 0) {
        if ((singletonHolder._40_8_ != 0) &&
           (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
          lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar24 + 0x210))(lVar22);
        }
                    /* try { // try from 002c6816 to 002c6821 has its CatchHandler @ 002c850f */
        pXVar28 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                            ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                             singletonHolder);
        local_158 = *(X11DragState **)(pXVar28 + 0x148);
        lVar22 = *(long *)(pXVar27 + 0x10);
        uVar23 = *(undefined8 *)(pXVar25 + 0xb0);
        local_138.tv_sec = local_138.tv_sec & 0xffffffffffffff00;
        local_138.tv_usec = 0;
        uStack_128 = 0;
        lStack_120 = 0;
        uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
                    /* try { // try from 002c6859 to 002c68a6 has its CatchHandler @ 002c85ad */
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        iVar19 = (**(code **)(lVar24 + 0x1b8))
                           (local_158,lVar22,uVar23,0,0x8000000,0,4,&local_118,&uStack_110,
                            &uStack_128,&lStack_120,&local_138.tv_usec);
        _Var13 = local_138.tv_usec;
        local_138.tv_sec =
             CONCAT71(local_138.tv_sec._1_7_,(byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0
                     );
        if (((((byte *)local_138.tv_usec != (byte *)0x0 && iVar19 == 0) && (local_118 == 4)) &&
            ((int)uStack_110 == 0x20)) && (uStack_128 != 0)) {
          uVar45 = 0;
          uVar41 = uStack_128;
          do {
            lVar22 = *(long *)(_Var13 + uVar45 * 8);
            if (lVar22 != 0) {
              iVar19 = *(int *)(pXVar27 + 0x4c);
              if ((int)*(uint *)(pXVar27 + 0x48) <= iVar19) {
                uVar51 = iVar19 + ((iVar19 - (iVar19 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
                if (*(uint *)(pXVar27 + 0x48) != uVar51) {
                  if ((int)uVar51 < 1) {
                    free(*(void **)(pXVar27 + 0x40));
                    *(long *)(pXVar27 + 0x40) = 0;
                  }
                  else {
                    pvVar32 = realloc(*(void **)(pXVar27 + 0x40),(ulong)uVar51 << 3);
                    *(void **)(pXVar27 + 0x40) = pvVar32;
                  }
                }
                *(uint *)(pXVar27 + 0x48) = uVar51;
                iVar19 = *(int *)(pXVar27 + 0x4c);
              }
              *(int *)(pXVar27 + 0x4c) = iVar19 + 1;
              *(long *)(*(long *)(pXVar27 + 0x40) + (long)iVar19 * 8) = lVar22;
              uVar41 = uStack_128;
            }
            uVar45 = uVar45 + 1;
          } while (uVar45 < uVar41);
        }
        if ((byte *)local_138.tv_usec != (byte *)0x0) {
                    /* try { // try from 002c7d46 to 002c7d55 has its CatchHandler @ 002c8517 */
          lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar22 + 0x128))();
        }
        if ((singletonHolder._40_8_ != 0) && (*(long *)(singletonHolder._40_8_ + 0x148) != 0)) {
                    /* try { // try from 002c7d6e to 002c7d7b has its CatchHandler @ 002c84e5 */
          lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar22 + 0x360))();
        }
      }
      uVar51 = *(uint *)(pXVar27 + 0x4c);
      if (uVar51 == 0) {
        lVar22 = *(long *)(param_6 + 0x12);
        if (lVar22 == 0) {
          uVar51 = 0;
        }
        else {
          if (*(int *)(pXVar27 + 0x48) < 1) {
            pvVar32 = realloc(*(void **)(pXVar27 + 0x40),0x40);
            *(void **)(pXVar27 + 0x40) = pvVar32;
            iVar19 = *(int *)(pXVar27 + 0x4c);
            *(undefined4 *)(pXVar27 + 0x48) = 8;
          }
          else {
            pvVar32 = *(void **)(pXVar27 + 0x40);
            iVar19 = 0;
          }
          uVar51 = iVar19 + 1;
          *(uint *)(pXVar27 + 0x4c) = uVar51;
          *(long *)((long)pvVar32 + (long)iVar19 * 8) = lVar22;
        }
        lVar22 = *(long *)(param_6 + 0x14);
        if (lVar22 != 0) {
          if ((int)*(uint *)(pXVar27 + 0x48) <= (int)uVar51) {
            uVar51 = uVar51 + ((int)((uVar51 - ((int)(uVar51 + 1) >> 0x1f)) + 1) >> 1) + 9 &
                     0xfffffff8;
            if (*(uint *)(pXVar27 + 0x48) != uVar51) {
              if ((int)uVar51 < 1) {
                free(*(void **)(pXVar27 + 0x40));
                *(long *)(pXVar27 + 0x40) = 0;
              }
              else {
                pvVar32 = realloc(*(void **)(pXVar27 + 0x40),(ulong)uVar51 << 3);
                *(void **)(pXVar27 + 0x40) = pvVar32;
              }
            }
            *(uint *)(pXVar27 + 0x48) = uVar51;
            uVar51 = *(uint *)(pXVar27 + 0x4c);
          }
          lVar24 = (long)(int)uVar51;
          uVar51 = uVar51 + 1;
          *(uint *)(pXVar27 + 0x4c) = uVar51;
          *(long *)(*(long *)(pXVar27 + 0x40) + lVar24 * 8) = lVar22;
        }
        lVar22 = *(long *)(param_6 + 0x16);
        if (lVar22 != 0) {
          if ((int)*(uint *)(pXVar27 + 0x48) <= (int)uVar51) {
            uVar51 = uVar51 + ((int)((uVar51 - ((int)(uVar51 + 1) >> 0x1f)) + 1) >> 1) + 9 &
                     0xfffffff8;
            if (*(uint *)(pXVar27 + 0x48) != uVar51) {
              if ((int)uVar51 < 1) {
                free(*(void **)(pXVar27 + 0x40));
                *(long *)(pXVar27 + 0x40) = 0;
              }
              else {
                pvVar32 = realloc(*(void **)(pXVar27 + 0x40),(ulong)uVar51 << 3);
                *(void **)(pXVar27 + 0x40) = pvVar32;
              }
            }
            *(uint *)(pXVar27 + 0x48) = uVar51;
            uVar51 = *(uint *)(pXVar27 + 0x4c);
          }
          lVar24 = (long)(int)uVar51;
          uVar51 = uVar51 + 1;
          *(uint *)(pXVar27 + 0x4c) = uVar51;
          *(long *)(*(long *)(pXVar27 + 0x40) + lVar24 * 8) = lVar22;
        }
        if (uVar51 == 0) goto LAB_002c82b6;
      }
      if ((0 < (int)uVar51) && (*(long *)(pXVar27 + 0x28) == 0)) {
        lVar22 = *(long *)(pXVar27 + 0x40);
        uVar41 = 1;
        do {
          lVar24 = *(long *)(lVar22 + -8 + uVar41 * 8);
          if (lVar24 == *(long *)(pXVar25 + 0x110)) {
            *(long *)(pXVar27 + 0x28) = lVar24;
            lVar50 = *(long *)(lVar22 + -8 + uVar41 * 8);
            lVar36 = lVar50;
            lVar14 = lVar24;
            if (lVar50 != *(long *)(pXVar25 + 0x118)) goto LAB_002c8238;
LAB_002c8268:
            *(long *)(pXVar27 + 0x28) = lVar50;
            lVar36 = *(long *)(lVar22 + -8 + uVar41 * 8);
            if (lVar36 != *(long *)(pXVar25 + 0x120)) goto LAB_002c827d;
LAB_002c8241:
            *(long *)(pXVar27 + 0x28) = lVar36;
            lVar24 = *(long *)(lVar22 + -8 + uVar41 * 8);
            lVar50 = lVar36;
            if (lVar24 == *(long *)(pXVar25 + 0x128)) goto LAB_002c8286;
          }
          else {
            lVar50 = lVar24;
            lVar36 = lVar24;
            lVar14 = 0;
            if (lVar24 == *(long *)(pXVar25 + 0x118)) goto LAB_002c8268;
LAB_002c8238:
            lVar50 = lVar14;
            if (lVar36 == *(long *)(pXVar25 + 0x120)) goto LAB_002c8241;
LAB_002c827d:
            lVar24 = lVar36;
            if (lVar36 == *(long *)(pXVar25 + 0x128)) {
LAB_002c8286:
              *(long *)(pXVar27 + 0x28) = lVar24;
              lVar50 = lVar24;
            }
          }
        } while ((uVar41 < uVar51) && (uVar41 = uVar41 + 1, lVar50 == 0));
      }
    }
    else {
      if (lVar22 == *(long *)(this + 0x80)) {
        plVar29 = std::__detail::
                  _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                  ::operator[]((ulong *)&local_168);
        this_01 = (ComponentPeer *)getPeerFor(*plVar29);
        if (this_01 != (ComponentPeer *)0x0) {
          local_138.tv_sec = 0;
          local_138.tv_usec = 0;
          ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
                    ((ArrayBase<juce::String,juce::DummyCriticalSection> *)&local_138,
                     (long *)plVar29[10],*(uint *)((long)plVar29 + 0x5c));
          uStack_128 = plVar29[0xc];
          piVar47 = (int *)(uStack_128 - 0x10);
          if (piVar47 != &emptyString) {
            LOCK();
            *piVar47 = *piVar47 + 1;
            UNLOCK();
          }
          lStack_120 = -1;
                    /* try { // try from 002c66ab to 002c66b7 has its CatchHandler @ 002c8529 */
          ComponentPeer::handleDragMove(this_01,(long)&local_138);
          *(undefined8 *)(this_01 + 0x98) = 0;
          piVar47 = (int *)(uStack_128 - 0x10);
          if (piVar47 != &emptyString) {
            LOCK();
            iVar19 = *piVar47;
            *piVar47 = *piVar47 + -1;
            UNLOCK();
            if (iVar19 == 0) {
              operator_delete__(piVar47);
            }
          }
          if (0 < local_138.tv_usec._4_4_) {
            lVar22 = 0;
            do {
              piVar47 = (int *)(*(long *)(local_138.tv_sec + lVar22 * 8) + -0x10);
              if (piVar47 != &emptyString) {
                LOCK();
                iVar19 = *piVar47;
                *piVar47 = *piVar47 + -1;
                UNLOCK();
                if (iVar19 == 0) {
                  operator_delete__(piVar47);
                }
              }
              lVar22 = lVar22 + 1;
            } while (lVar22 < local_138.tv_usec._4_4_);
          }
          local_138.tv_usec = local_138.tv_usec & 0xffffffff;
          free((void *)local_138.tv_sec);
        }
        if (0 < *(int *)((long)plVar29 + 0x5c)) {
          lVar22 = 0;
          do {
            piVar47 = (int *)(*(long *)(plVar29[10] + lVar22 * 8) + -0x10);
            if (piVar47 != &emptyString) {
              LOCK();
              iVar19 = *piVar47;
              *piVar47 = *piVar47 + -1;
              UNLOCK();
              if (iVar19 == 0) {
                operator_delete__(piVar47);
              }
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)((long)plVar29 + 0x5c));
        }
        *(undefined4 *)((long)plVar29 + 0x5c) = 0;
        if ((int)plVar29[0xb] != 0) {
          free((void *)plVar29[10]);
          plVar29[10] = 0;
        }
        *(undefined4 *)(plVar29 + 0xb) = 0;
        piVar47 = (int *)(plVar29[0xc] + -0x10);
        if (piVar47 != &emptyString) {
          LOCK();
          iVar19 = *piVar47;
          *piVar47 = *piVar47 + -1;
          UNLOCK();
          if (iVar19 == 0) {
            operator_delete__(piVar47);
          }
        }
        plVar29[0xc] = (long)&DAT_0061ac58;
        plVar29[0xd] = -1;
        plVar29[5] = 0;
        plVar29[2] = 0;
        *(undefined4 *)((long)plVar29 + 0x4c) = 0;
        if ((int)plVar29[9] != 0) {
          free((void *)plVar29[8]);
          plVar29[8] = 0;
        }
        *(undefined4 *)(plVar29 + 9) = 0;
        *(undefined1 *)(plVar29 + 4) = 0;
        return;
      }
      if (lVar22 != *(long *)(this + 0x88)) {
        if (lVar22 == *(long *)(this + 0x98)) {
          pXVar27 = (X11DragState *)
                    std::__detail::
                    _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((ulong *)&local_168);
          if ((*(int *)(pXVar27 + 0x5c) == 0) && (**(char **)(pXVar27 + 0x60) == '\0')) {
            pXVar27[0x20] = (X11DragState)0x1;
            uVar23 = (**(code **)(*(long *)param_5 + 0x18))();
            X11DragState::updateDraggedFileList(pXVar27,(long)param_6,uVar23);
            return;
          }
          X11DragState::handleDragAndDropDataReceived(pXVar27);
          return;
        }
        if (lVar22 == *(long *)(this + 0x90)) {
          pXVar27 = (X11DragState *)
                    std::__detail::
                    _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((ulong *)&local_168);
          X11DragState::handleExternalDragAndDropStatus(pXVar27,(long)param_6);
          return;
        }
        if (lVar22 == *(long *)(this + 0xa0)) {
          pXVar27 = (X11DragState *)
                    std::__detail::
                    _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((ulong *)&local_168);
          X11DragState::externalResetDragAndDrop(pXVar27);
          return;
        }
        if (lVar22 != *(long *)(this + 0xd8)) {
          return;
        }
        if (param_6[0xc] == 0x20) {
          handleXEmbedMessage(this,param_5,*(long *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x14)
                             );
          return;
        }
        return;
      }
      pXVar27 = (X11DragState *)
                std::__detail::
                _Map_base<juce::LinuxComponentPeer*,std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,std::allocator<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>,std::__detail::_Select1st,std::equal_to<juce::LinuxComponentPeer*>,std::hash<juce::LinuxComponentPeer*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                ::operator[]((ulong *)&local_168);
    }
    X11DragState::handleDragAndDropPosition(pXVar27,(long)param_6,(ComponentPeer *)param_5);
    break;
  case 0x22:
    if (param_6[10] != 2) {
      if ((singletonHolder._40_8_ != 0) &&
         (lVar22 = *(long *)(singletonHolder._40_8_ + 0x148), lVar22 != 0)) {
        lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar24 + 0x210))(lVar22);
      }
                    /* try { // try from 002c52da to 002c52f1 has its CatchHandler @ 002c8750 */
      lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar22 + 0x288))(param_6);
      updateModifierMappings(this);
      if (singletonHolder._40_8_ != 0) {
        lVar22 = *(long *)(singletonHolder._40_8_ + 0x148);
        if (lVar22 != 0) {
                    /* try { // try from 002c5312 to 002c531f has its CatchHandler @ 002c8668 */
          lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar24 + 0x360))(lVar22);
        }
      }
    }
  }
switchD_002c4d02_caseD_10:
  return;
LAB_002c6fa8:
  uVar39 = (uint)*pbVar37;
  if (*pbVar37 == 0) goto LAB_002c710e;
  goto LAB_002c6ee0;
LAB_002c63a3:
  pbVar30 = pbVar37 + 1;
  bVar15 = *pbVar37;
  uVar51 = (uint)bVar15;
  if ((char)bVar15 < '\0') {
    if ((bVar15 & 0x40) != 0) {
      if ((bVar15 & 0x20) == 0) {
        uVar39 = 0x3f;
        lVar36 = 0;
        bVar53 = false;
        bVar11 = false;
      }
      else {
        bVar53 = true;
        if ((bVar15 & 0x10) == 0) {
          uVar39 = 0x1f;
          lVar36 = 1;
          bVar11 = false;
        }
        else {
          uVar39 = 0xf;
          lVar36 = 2;
          bVar11 = true;
        }
      }
      uVar51 = uVar51 & uVar39;
      if ((pbVar37[1] & 0xffffffc0) == 0x80) {
        pbVar31 = pbVar37 + lVar36 + 2;
        uVar51 = pbVar37[1] & 0x3f | uVar51 << 6;
        pbVar30 = pbVar31;
        if (bVar53) {
          pbVar30 = pbVar37 + 2;
          if ((*pbVar30 & 0xc0) == 0x80) {
            uVar51 = *pbVar30 & 0x3f | uVar51 << 6;
            pbVar30 = pbVar31;
            if (bVar11) {
              bVar15 = pbVar37[3];
              pbVar30 = pbVar37 + 3;
              if ((bVar15 & 0xc0) == 0x80) {
                uVar51 = uVar51 << 6 | bVar15 & 0x3f;
                pbVar30 = pbVar31;
              }
            }
          }
        }
      }
      goto joined_r0x002c6492;
    }
    uVar51 = uVar51 & 0x7f;
    if ((bVar15 & 0x7f) == 0) goto LAB_002c64ca;
  }
  else {
joined_r0x002c6492:
    if (uVar51 == 0) goto LAB_002c64ca;
  }
  lVar36 = 1;
  if ((0x7f < uVar51) && (lVar36 = 2, 0x7ff < uVar51)) {
    lVar36 = 4 - (ulong)(uVar51 < 0x10000);
  }
  lVar50 = lVar50 + lVar36;
  pbVar37 = pbVar30;
  goto LAB_002c63a3;
  while (pCVar34 = *(Component **)(pCVar34 + 0x30), pCVar34 != pCVar35) {
LAB_002c7f12:
    if (pCVar34 == (Component *)0x0) {
      cVar16 = (**(code **)(*(long *)pCVar35 + 0x170))(pCVar35,pCVar52);
      if (cVar16 == '\0') {
        if ((ModalComponentManager::singletonHolder != 0) &&
           (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
          uVar41 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
          pCVar35 = (Component *)0x0;
          goto LAB_002c7f5e;
        }
        pCVar35 = (Component *)0x0;
        goto LAB_002c82c7;
      }
      break;
    }
  }
  goto LAB_002c82ce;
  while (uVar41 = uVar41 - 1, 1 < uVar41) {
LAB_002c7f5e:
    lVar22 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                      (ulong)((int)uVar41 - 2) * 8);
    if (*(char *)(lVar22 + 0x5c) != '\0') {
      pCVar35 = *(Component **)(lVar22 + 0x40);
      break;
    }
  }
LAB_002c82c7:
  if (pCVar35 != (Component *)0x0) {
    pCVar52 = pCVar35;
  }
  goto LAB_002c82ce;
LAB_002c64ca:
  (**(code **)(lVar24 + 0x30))
            (uVar23,*(undefined8 *)(param_6 + 10),*(undefined8 *)(param_6 + 0x10),lVar22,8,0,
             (byte *)plVar29[0x10],lVar50);
LAB_002c64e4:
  lVar22 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar22 + 0x2d0))(uVar23,*(undefined8 *)(param_6 + 10),1,0,&local_138);
  return;
}


