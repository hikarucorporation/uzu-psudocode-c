// Function : sendTextMessage
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191dc0
// Prototype: undefined4 sendTextMessage(ComponentBase * this, char * param_1)
// Body     : 00191dc0 - 00192014


/* Steinberg::Vst::ComponentBase::sendTextMessage(char const*) const */

undefined4 __thiscall
Steinberg::Vst::ComponentBase::sendTextMessage(ComponentBase *this,char *param_1)

{
  short *psVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  undefined **local_58;
  char *pcStack_50;
  uint local_48;
  long *local_38;
  
  puVar3 = *(undefined8 **)(this + 0x20);
  local_58 = (undefined **)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    iVar5 = (**(code **)*puVar3)(puVar3,0x71ac80,&local_58);
    ppuVar4 = local_58;
    if (iVar5 == 0) {
      if (local_58 == (undefined **)0x0) {
        return 1;
      }
      local_58 = (undefined **)CONCAT44(IMessage::iid._12_4_,IMessage::iid._8_4_);
      pcStack_50 = (char *)CONCAT44(IMessage::iid._20_4_,IMessage::iid._16_4_);
      local_38 = (long *)0x0;
                    /* try { // try from 00191e33 to 00191e43 has its CatchHandler @ 0019202c */
      iVar5 = (**(code **)(*ppuVar4 + 0x20))(ppuVar4,&local_58);
      plVar13 = (long *)0x0;
      if (iVar5 == 0) {
        plVar13 = local_38;
      }
                    /* try { // try from 00191e55 to 00191e5a has its CatchHandler @ 00192024 */
      (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
      if (plVar13 == (long *)0x0) {
        return 1;
      }
                    /* try { // try from 00191e63 to 00191e6f has its CatchHandler @ 0019201f */
      (**(code **)(*plVar13 + 0x20))(plVar13,"TextMessage");
      pcStack_50 = (char *)0x0;
      uVar12 = local_48 & 0x80000000;
      local_58 = &PTR__String_00702c10;
      local_48 = uVar12;
      if (param_1 != (char *)0x0) {
        sVar7 = strlen(param_1);
        if (0 < (int)sVar7) {
                    /* try { // try from 00191ea2 to 00191eb3 has its CatchHandler @ 00192015 */
          Steinberg::String::_toWideString((String *)&local_58,param_1,(int)sVar7,0xfde9);
          uVar12 = local_48;
        }
      }
      if (((((uVar12 & 0x3fffff00) != 0) && (pcStack_50 != (char *)0x0)) &&
          ((uVar12 & 0x3fffffff) != 0)) && (0xff < (uVar12 & 0x3fffffff))) {
        Steinberg::String::resize((String *)&local_58,0xff,uVar12 >> 0x1e & 1,'\0');
        if ((local_48 & 0x40000000) == 0) {
                    /* try { // try from 00191f0a to 00191fe3 has its CatchHandler @ 00192042 */
          pcVar8 = (char *)(*(code *)local_58[3])(&local_58);
          uVar12 = 0xffffffff;
          do {
            uVar12 = uVar12 + 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
        }
        else {
          lVar9 = (*(code *)local_58[4])(&local_58);
          uVar11 = 0;
          do {
            psVar1 = (short *)(lVar9 + uVar11);
            uVar11 = uVar11 + 2;
          } while (*psVar1 != 0);
          uVar12 = ((uint)(uVar11 >> 1) & 0x7fffffff) + 0x3fffffff;
        }
        local_48 = local_48 & 0xc0000000 | uVar12 & 0x3fffffff;
      }
      plVar10 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13);
      uVar12 = local_48 & 0x40000000;
      if (((uVar12 == 0) && (uVar12 = 0, pcStack_50 != (char *)0x0)) &&
         ((local_48 & 0x3fffffff) != 0)) {
        Steinberg::String::_toWideString((String *)&local_58,pcStack_50,local_48 & 0x3fffffff,0);
        uVar12 = local_48 & 0x40000000;
      }
      pcVar8 = pcStack_50;
      if (pcStack_50 == (char *)0x0) {
        pcVar8 = "";
      }
      if (uVar12 == 0) {
        pcVar8 = "";
      }
      (**(code **)(*plVar10 + 0x38))(plVar10,"Text",pcVar8);
      plVar10 = *(long **)(this + 0x28);
      if (plVar10 == (long *)0x0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)(*plVar10 + 0x28))(plVar10,plVar13);
      }
      local_58 = &PTR__String_00702c10;
      if (pcStack_50 != (char *)0x0) {
        free(pcStack_50);
      }
                    /* try { // try from 0019200a to 0019200f has its CatchHandler @ 00192017 */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      return uVar6;
    }
  }
  return 1;
}


