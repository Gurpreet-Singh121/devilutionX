#include <gtest/gtest.h>

#include "cursor.h"
#include "itemdat.h"

using namespace devilution;

TEST(Cursor, SetCursor)
{
	int i = ICURS_SPIKED_CLUB + CURSOR_FIRSTITEM;
	NewCursor(i);
	EXPECT_EQ(pcurs, i);
	EXPECT_EQ(cursSize.width, 1 * 28);
	EXPECT_EQ(cursSize.height, 3 * 28);
}
