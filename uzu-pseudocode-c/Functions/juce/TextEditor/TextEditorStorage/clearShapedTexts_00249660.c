// Function : clearShapedTexts
// Namespace: juce:TextEditor:TextEditorStorage
// Entry    : 00249660
// Prototype: undefined clearShapedTexts(long param_1, long param_2, long param_3)
// Body     : 00249660 - 0024976c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::TextEditorStorage::clearShapedTexts() */

void __cdecl
juce::TextEditor::TextEditorStorage::clearShapedTexts(long param_1,long param_2,long param_3)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  ParagraphStorage PVar3;
  ParagraphStorage *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  long lVar4;
  
  if (param_2 - param_1 != 0) {
    lVar4 = 0;
    do {
      this = *(ParagraphStorage **)(param_3 + (lVar4 >> 1));
      if (this[0x48] == (ParagraphStorage)0x0) {
LAB_00249720:
        PVar3 = this[0x54];
      }
      else {
        this[0x48] = (ParagraphStorage)0x0;
        this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x40);
        if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00249720;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
          PVar3 = this[0x54];
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = this_00 + 8;
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = (int)*(long *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar2 + -1;
          }
          if (iVar2 != 1) goto LAB_00249720;
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          PVar3 = this[0x54];
        }
      }
      if (PVar3 != (ParagraphStorage)0x0) {
        this[0x54] = (ParagraphStorage)0x0;
      }
      if (this[0x60] != (ParagraphStorage)0x0) {
        this[0x60] = (ParagraphStorage)0x0;
      }
      ParagraphStorage::updatePasswordReplacementText(this);
      lVar4 = lVar4 + 0x10;
    } while ((param_2 - param_1 >> 4) * 0x10 != lVar4);
  }
  return;
}


