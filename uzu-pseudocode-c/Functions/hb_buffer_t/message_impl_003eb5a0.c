// Function : message_impl
// Namespace: hb_buffer_t
// Entry    : 003eb5a0
// Prototype: bool message_impl(hb_buffer_t * this, undefined8 param_1, char * param_2, __gnuc_va_list param_3)
// Body     : 003eb5a0 - 003eb5f1


/* hb_buffer_t::message_impl(hb_font_t*, char const*, __va_list_tag*) */

bool __thiscall
hb_buffer_t::message_impl(hb_buffer_t *this,undefined8 param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  char acStack_88 [112];
  
  *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
  vsnprintf(acStack_88,100,param_2,param_3);
  iVar1 = (**(code **)(this + 0xd0))(this,param_1,acStack_88,*(undefined8 *)(this + 0xd8));
  *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + -1;
  return iVar1 != 0;
}


