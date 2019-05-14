//
// Created by Mateo SMITH on 14/05/2019.
//

#ifndef TCP_TCP_H
#define TCP_TCP_H

#include <array>

enum state
{
    FIN_WAIT_1,
    FIN_WAIT_2,
    CLOSING,
    TIME,
    CLOSED,
    LAST_ACK,
    CLOSE_WAIT,
    ESTAB,
    LISTEN,
    SYN_RCVD,
    SYN_SENT
};

class tcp
{
public:
    int syn_sent(std::array<int, 6> control);
    int syn_rcvd(std::array<int, 6> control);
    int listen(std::array<int, 6> control);
    int estab(std::array<int, 6> control);
    int fin_wait_1(std::array<int, 6> control);
    int fin_wait_2(std::array<int, 6> control);
    int closing(std::array<int, 6> control);
    int time(std::array<int, 6> control);
    int closed(std::array<int, 6> control);
    int last_ack(std::array<int, 6> control);
    int close_wait(std::array<int, 6> control);

private:
    enum state state_ = CLOSED;
};

#endif //TCP_TCP_H
