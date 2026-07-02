#include "listnode.h"


List::List()
    : m_head(new ListNode(static_cast<int>(0))), m_size(0),
    m_tail(new ListNode(0, m_head))
{
}
