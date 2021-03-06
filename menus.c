/*
 * MIT License
 *
 * Copyright (c) 2020 Michel Kakulphimp
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 ******************************************************************************/

#include "menus.h"
#include "utils.h"
#include "checkpointing_test_fixture.h"

splash_t splashScreen =
{
    ANSI_COLOR_CYAN,                        
    "   ██████╗████████╗███████╗",
    "  ██╔════╝╚══██╔══╝██╔════╝",
    "  ██║        ██║   █████╗  ",
    "  ██║        ██║   ██╔══╝  ",
    "  ╚██████╗   ██║   ██║     ",
    "   ╚═════╝   ╚═╝   ╚═╝     ",
    "",
    ANSI_COLOR_RESET,
    "   Checkpointing Test Fixture",
    "   Build Date: "__DATE__" "__TIME__"",
    "",
};

// All menus need to be externed up here
extern consoleMenu_t mainMenu;

consoleMenuItem_t mainMenuItems[] = 
{
    {{"Uptime", "Get current system uptime"},       NO_SUB_MENU,    Utils_DisplayUptime},
    {{"Setup",  "Setup checkpointing parameters"},  NO_SUB_MENU,    PowerLossEmu_Setup},
    {{"Current",  "Display current parameters"},    NO_SUB_MENU,    Checkpointing_CurrentSettings},
    {{"Run", "Run checkpointing workload"},         NO_SUB_MENU,    Checkpointing_WorkloadLoop},
};
consoleMenu_t mainMenu = {{"Main Menu", "This is the main menu."}, mainMenuItems, NO_TOP_MENU, MENU_SIZE(mainMenuItems)};
