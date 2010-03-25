#include "TimeColumnFilter.h"

int32_t TimeColumnFilter::convertRefValue()
{
    int32_t ref_remote = IntColumnFilter::convertRefValue();
    if (query) {
	int32_t timezone_offset = _query->timezoneOffset();
	return ref_remote - timezone_offset;
    }
    else
	return ref_remote; // should never happen
}
