from django.conf.urls import patterns, url

from ppb import views

urlpatterns = patterns('',
    url(r'^$', views.index, name='index'),
)

