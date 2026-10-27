// Function : ~parsed_values_t
// Namespace: CFF:parsed_values_t_CFF__op_str_t_
// Entry    : 0043ea60
// Prototype: undefined ~parsed_values_t(parsed_values_t<CFF::op_str_t> * this)
// Body     : 0043ea60 - 0043ea82


/* CFF::parsed_values_t<CFF::op_str_t>::~parsed_values_t() */

void __thiscall
CFF::parsed_values_t<CFF::op_str_t>::~parsed_values_t(parsed_values_t<CFF::op_str_t> *this)

{
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 0xc) = 0;
    free(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


