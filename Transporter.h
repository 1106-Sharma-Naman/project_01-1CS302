#ifndef TRANSPORTER_H
#define TRANSPORTER_H

// Transporter is pure abstract base class (interface)

template <typename T1>
class Transporter
{
public:
    virtual ~Transporter() = default;

    virtual void load(const T1& itm) = 0;

    virtual void unload() = 0;

    virtual void empty() = 0;

    virtual void move() = 0;

    virtual bool IsEmpty() const = 0;

    virtual int GetCount() const = 0;
};

#endif
