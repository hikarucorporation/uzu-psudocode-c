// Function : getTextDescription
// Namespace: juce:KeyPress
// Entry    : 00233ff0
// Prototype: undefined getTextDescription(undefined8 * param_1, wint_t * param_2)
// Body     : 00233ff0 - 00234535


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::KeyPress::getTextDescription() const */

void __cdecl juce::KeyPress::getTextDescription(undefined8 *param_1,wint_t *param_2)

{
  int iVar1;
  uint uVar2;
  wint_t __wc;
  char *__s;
  undefined4 *puVar3;
  long lVar4;
  size_t sVar5;
  int *piVar6;
  undefined1 *local_30;
  wint_t local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  
  local_30 = &DAT_0061ac58;
  if ((int)*param_2 < 1) {
LAB_0023430d:
    *param_1 = local_30;
    local_30 = &DAT_0061ac58;
  }
  else {
    if ((param_2[2] == 0x2f) && (*param_2 != 0x100000af)) {
                    /* try { // try from 00234022 to 00234162 has its CatchHandler @ 00234577 */
      puVar3 = operator_new__(0x1b);
      LOCK();
      *puVar3 = 0;
      UNLOCK();
      *(undefined8 *)(puVar3 + 2) = 4;
      *(undefined2 *)(puVar3 + 4) = 0x2f;
      *param_1 = puVar3 + 4;
      goto LAB_0023431a;
    }
    uVar2 = param_2[1];
    if ((uVar2 & 2) != 0) {
      juce::String::appendCharPointer((String *)&local_30,&DAT_005e3359,0x5e3360);
      uVar2 = param_2[1];
    }
    if ((uVar2 & 1) != 0) {
      juce::String::appendCharPointer((String *)&local_30,&DAT_005e3361,0x5e3369);
      uVar2 = param_2[1];
    }
    if ((uVar2 & 4) != 0) {
      juce::String::appendCharPointer((String *)&local_30,&DAT_005e336a,0x5e3370);
    }
    __wc = *param_2;
    if ((int)__wc < 0x10000050) {
      lVar4 = 0;
      switch(__wc) {
      case 8:
        lVar4 = 3;
        break;
      case 9:
        lVar4 = 0xe;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
        goto switchD_002340cd_caseD_10000058;
      case 0xd:
        lVar4 = 1;
        break;
      case 0x1b:
        lVar4 = 2;
        break;
      case 0x20:
        break;
      default:
        switch(__wc) {
        case 0xffeeff00:
          lVar4 = 0xf;
          break;
        case 0xffeeff01:
          lVar4 = 0x10;
          break;
        case 0xffeeff02:
          lVar4 = 0x11;
          break;
        case 0xffeeff03:
          lVar4 = 0x12;
          break;
        default:
          goto switchD_002340cd_caseD_10000058;
        }
      }
    }
    else {
      switch(__wc) {
      case 0x10000050:
        lVar4 = 10;
        break;
      case 0x10000051:
        lVar4 = 4;
        break;
      case 0x10000052:
        lVar4 = 6;
        break;
      case 0x10000053:
        lVar4 = 5;
        break;
      case 0x10000054:
        lVar4 = 7;
        break;
      case 0x10000055:
        lVar4 = 8;
        break;
      case 0x10000056:
        lVar4 = 9;
        break;
      case 0x10000057:
        lVar4 = 0xb;
        break;
      case 0x10000058:
      case 0x10000059:
      case 0x1000005a:
      case 0x1000005b:
      case 0x1000005c:
      case 0x1000005d:
      case 0x1000005e:
      case 0x1000005f:
      case 0x10000060:
      case 0x10000061:
      case 0x10000062:
switchD_002340cd_caseD_10000058:
        if (__wc + 0xefffff42 < 0x10) {
          operator<<((String *)&local_30,0x46);
          operator<<((String *)&local_30,*param_2 + 0xefffff43);
        }
        else if (__wc + 0xefffff32 < 8) {
                    /* try { // try from 0023425b to 002343a9 has its CatchHandler @ 00234577 */
          operator<<((String *)&local_30,0x46);
          operator<<((String *)&local_30,*param_2 + 0xefffff43);
        }
        else if (__wc + 0xefffff2a < 0xb) {
          operator<<((String *)&local_30,0x46);
          operator<<((String *)&local_30,*param_2 + 0xefffff43);
        }
        else if (__wc + 0xefffff50 < 10) {
          juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
          operator<<((String *)&local_30,*param_2 + 0xefffff50);
        }
        else if (__wc - 0x21 < 0x8f) {
          local_28 = towupper(__wc);
          uStack_24 = 0;
          juce::String::appendCharPointer<juce::CharPointer_UTF32>(&local_30,&local_28);
        }
        else {
          switch(__wc) {
          case 0x1000009f:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            juce::String::appendCharPointer((String *)&local_30,"delete",0x65bab1);
            break;
          default:
            operator<<((String *)&local_30,0x23);
                    /* try { // try from 002343ac to 002343b5 has its CatchHandler @ 00234550 */
            juce::String::createHex((String *)&local_28,*param_2);
                    /* try { // try from 002343b6 to 002343c4 has its CatchHandler @ 00234536 */
            juce::String::operator+=((String *)&local_30,(String *)&local_28);
            piVar6 = (int *)(CONCAT44(uStack_24,local_28) + -0x10);
            if (piVar6 != &emptyString) {
              LOCK();
              iVar1 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                operator_delete__(piVar6);
              }
            }
            break;
          case 0x100000aa:
                    /* try { // try from 002343f9 to 00234530 has its CatchHandler @ 00234577 */
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            operator<<((String *)&local_30,0x2a);
            break;
          case 0x100000ab:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            operator<<((String *)&local_30,0x2b);
            break;
          case 0x100000ac:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            juce::String::appendCharPointer((String *)&local_30,"separator",0x5e337a);
            break;
          case 0x100000ad:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            operator<<((String *)&local_30,0x2d);
            break;
          case 0x100000ae:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            operator<<((String *)&local_30,0x2e);
            break;
          case 0x100000af:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            operator<<((String *)&local_30,0x2f);
            break;
          case 0x100000bd:
            juce::String::appendCharPointer((String *)&local_30,"numpad ",0x5e3cc9);
            operator<<((String *)&local_30,0x3d);
          }
        }
        goto LAB_0023430d;
      case 0x10000063:
        lVar4 = 0xd;
        break;
      default:
        if (__wc != 0x100000ff) goto switchD_002340cd_caseD_10000058;
        lVar4 = 0xc;
      }
    }
    local_20 = local_30;
    piVar6 = (int *)(local_30 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    __s = (&KeyPressHelpers::translations)[lVar4 * 2];
    sVar5 = strlen(__s);
                    /* try { // try from 00234201 to 0023420d has its CatchHandler @ 00234552 */
    juce::String::appendCharPointer((String *)&local_20,__s,(long)(__s + sVar5));
    *param_1 = local_20;
    piVar6 = (int *)(local_20 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piVar6 = (int *)(local_20 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
    }
  }
LAB_0023431a:
  piVar6 = (int *)(local_30 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar6);
    }
  }
  return;
}


